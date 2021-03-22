#include <iostream>
#include "MoveToPlayerAction.h"

MoveToPlayerAction::MoveToPlayerAction()
{
	name = "Move to player Action";
}

MoveToPlayerAction::~MoveToPlayerAction()
= default;

void MoveToPlayerAction::Action()
{
	std::cout << "Performing Move to player Action" << std::endl;
}
