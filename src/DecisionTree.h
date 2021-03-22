#pragma once
#ifndef  __DECISION_TREE__
#define __DECISION_TREE__
#include "Agent.h"
#include "TreeNode.h"
#include "TreeNodeType.h"
#include "LOSCondition.h"
#include "RadiusCondition.h"
#include "CloseCombatCondition.h"
class DecisionTree
{
public:
	DecisionTree();
	~DecisionTree();

	Agent* getAgent();
	void setAgent(Agent* agent);

	TreeNode* AddNode(TreeNode* parent, TreeNode* child_node, TreeNodeType type);
	void DisplayTree();
	void Update();
	std::string MakeDecision();

private:
	Agent* m_agent;

	LOSCondition* m_LOSNode;
	RadiusCondition* m_RadiusNode;
	CloseCombatCondition* m_closeCombatNode;
	void m_buildTree();
	std::vector<TreeNode*> m_treeNodeList;
};
#endif // ! __DECISION_TREE__
