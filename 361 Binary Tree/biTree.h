#pragma once
#include <iostream>
#include <string>
#include <random>
#include <ctime>
class biTree
{
public:
	biTree();
	~biTree();
	void setValue(int);
	void setLetter(char);
	int getValue();
	//char getLetter();
	void addTobiTree(biTree*);
	void display();
private:
	int value;
	int countVal;
	char letter;
	biTree* Left;
	biTree* Right;
	biTree* Mychild;
};

