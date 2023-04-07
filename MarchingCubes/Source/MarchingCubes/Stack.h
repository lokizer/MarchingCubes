#pragma once
#include "Point.h"
#include "Containers/Array.h"

class Stack
{
public:
	TArray<Point> data;
	int top;
	Stack();
	int IsEmpty();
	void Push(Point p);
	void Pop();
};
