#pragma once
#ifndef __TREE__NODE__
#define __TREE__NODE__

#include <string>

struct TreeNode
{
	TreeNode() = default;
	virtual ~TreeNode() = default;

	std::string name = "";
	bool data = false;

	TreeNode* left = nullptr;
	TreeNode* right = nullptr;
	TreeNode* parent = nullptr;
	bool isLeaf = false;
};
#endif // !__TREE__NODE__

