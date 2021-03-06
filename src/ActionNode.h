#pragma once
#ifndef __ACTION_NODE__
#define __ACTION_NODE__
#include "TreeNode.h"

class ActionNode : public TreeNode
{
public:
	ActionNode()
	{
		isLeaf = true;
	}
	virtual ~ActionNode() = default;

	virtual void Action() = 0;
};
#endif // _ACTION_NODE__
