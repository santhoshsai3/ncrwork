#include<iostream>
#include<string>
using namespace std;


class stack1
{
	int top;
	int *stk;
	int size;

public:

	stack1()
	{
		int n;
		cout << "enter n:";
		cin >> n;
		stk = new int[n];
		size = n;
		top = -1;

	}
	bool isfull()
	{
		return (top == (size - 1));

	}
	bool isempty()
	{
		return (top == -1);

	}

	void push(int x)
	{
		if (!isfull())
		{
			cout  << x;

			stk[++top] = x;
		}
		else {

			cout << "stack is full";
			//	return -1;
		}
	}

	void pop()
	{
		if (!isempty())
		{
			cout << stk[top--];

			//return stk[top--];
		}
		else
		{
			cout << "stack is empty";
			//return -2;
		}

	}
	int seek()
	{
		if (!isempty())
			return stk[top];
		else
		{
			cout << "stack is empty";
			return -2;
		}
	}
};

