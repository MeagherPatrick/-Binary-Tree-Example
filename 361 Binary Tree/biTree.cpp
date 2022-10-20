#include "biTree.h"

biTree::biTree()
	:countVal(0)
{
	letter = '!';
	value = 0;
	Left = nullptr;
	Right = nullptr;
	Mychild = nullptr;
}

biTree::~biTree()
{
}
void biTree::setValue(int v)
{
	value = v; 
	countVal = 1;
}

int biTree::getValue()
{
	return value;
}

void biTree::addTobiTree(biTree* newNode)
{
	if (value == newNode->getValue())
	{
		std::cout << value << " already exists" << std::endl;
		countVal++;
		if (Mychild == nullptr)
		{
			Mychild = newNode;
		}
		else
		{
			Mychild->addTobiTree(newNode);
		}
		newNode = nullptr;
	}
	else if (newNode->getValue() < value)
	{
		if (Left == nullptr)
		{
			Left = newNode;
		}
		else
		{
			Left->addTobiTree(newNode);
		}
	}
	else
	{
		if (Right == nullptr)
		{
			Right = newNode;
		}
		else
		{
			Right->addTobiTree(newNode);
		}
	}
	newNode = nullptr;
}

void biTree::display()
{
	if (Left != nullptr)
	{
		Left->display();
	}
	std::cout << "Value: " << value << " appeared " << countVal
		<< " times let = " << letter << "\n";
	if (Mychild != nullptr)
	{
		Mychild->display();
	}
	if (Right != nullptr)
	{
		Right->display();
	}
}

//char biTree::getLetter()
//{
//}

void biTree::setLetter(char newletter)
{
	letter = newletter;
}
