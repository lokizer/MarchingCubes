#include "Stack.h"

Stack::Stack()
{
	this->top = -1;
}


int Stack::IsEmpty()
{
	if (this->top == -1) 
		return 1;
	else 
		return 0;
}

void Stack::Push(Point p)
{
	this->data.Add(p);
	++this->top;
}


void Stack::Pop()
{
	if (IsEmpty())
	{
		return;
	}
	this->data.RemoveAt(this->top);
	this->top--;
}