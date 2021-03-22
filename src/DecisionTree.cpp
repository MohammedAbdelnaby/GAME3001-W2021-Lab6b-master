#include "DecisionTree.h"
#include "PatrolAction.h"
#include "MoveToLOSAction.h"
#include "MoveToPlayerAction.h"
#include "AttackAction.h"
#include <iostream>

DecisionTree::DecisionTree()
{
	m_buildTree();

}

DecisionTree::~DecisionTree()
= default;

Agent* DecisionTree::getAgent()
{
	return m_agent;
}

void DecisionTree::setAgent(Agent* agent)
{
	m_agent = agent;
}

TreeNode* DecisionTree::AddNode(TreeNode* parent, TreeNode* child_node, TreeNodeType type)
{
	switch (type)
	{
	case LEFT_TREE_NODE:
		parent->left = child_node;
		break;
	case RIGHT_TREE_NODE:
		parent->right = child_node;
		break;
	}
	child_node->parent = parent;
	return child_node;
}

void DecisionTree::DisplayTree()
{
	for (auto* node : m_treeNodeList)
	{
		std::cout << node->name << std::endl;
	}
}

void DecisionTree::Update()
{
	m_LOSNode->setLOS(m_agent->hasLOS());
}

std::string DecisionTree::MakeDecision()
{
	Update();
	auto currentNode = m_treeNodeList[0];


	while (!currentNode->isLeaf)
	{
		currentNode = (currentNode->data) ? (currentNode->right) : (currentNode->left);
	}

	return currentNode->name;
}

void DecisionTree::m_buildTree()
{
	m_LOSNode = new LOSCondition();
	m_treeNodeList.push_back(m_LOSNode);

	m_RadiusNode = new RadiusCondition();
	AddNode(m_LOSNode, m_RadiusNode, LEFT_TREE_NODE);
	m_treeNodeList.push_back(m_RadiusNode);

	m_closeCombatNode = new CloseCombatCondition();
	AddNode(m_LOSNode, m_closeCombatNode, RIGHT_TREE_NODE);
	m_treeNodeList.push_back(m_closeCombatNode);

	TreeNode* Patrol = AddNode(m_RadiusNode, new PatrolAction(), LEFT_TREE_NODE);
	m_treeNodeList.push_back(Patrol);

	TreeNode* MoveToLOSNode = AddNode(m_RadiusNode, new MoveToLOSAction(), RIGHT_TREE_NODE);
	m_treeNodeList.push_back(MoveToLOSNode);

	TreeNode* MoveToPlayerNode = AddNode(m_closeCombatNode, new MoveToPlayerAction(), LEFT_TREE_NODE);
	m_treeNodeList.push_back(MoveToPlayerNode);

	TreeNode* AttackNode = AddNode(m_closeCombatNode, new AttackAction(), RIGHT_TREE_NODE);
	m_treeNodeList.push_back(AttackNode);

}
