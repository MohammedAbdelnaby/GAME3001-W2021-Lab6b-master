#include "MoveToLOSAction.h"
#include <iostream>

MoveToLOSAction::MoveToLOSAction()
{
	name = "Move to LOS Action";
}

MoveToLOSAction::~MoveToLOSAction()
= default;

void MoveToLOSAction::Action()
{
	std::cout << "Performing Move to LOS Action" << std::endl;
}
