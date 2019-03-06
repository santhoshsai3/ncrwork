#include<string>
#include<iostream>
using namespace std;
#define MAX 10
//#include "add.h"
//#include "sub.h";
//#include "mul.h";
//#include "div.h";


class stack
{
	int top;
	float *stk;
	int size;

public:
	stack()
	{
		int n;
		n = MAX;
		stk = new float[n];
		size = n;
		top = -1;


	}
	bool isfull()
	{
		if (top == (size - 1))
			return true;
		else
			return false;
	}
	bool isempty()
	{
		if (top == -1)
			return true;
		else
			return false;
	}

	void push(int x)
	{
		if (!isfull())
			stk[++top] = x;
		else {

			cout << "stack is full";
			//	return -1;
		}
	}

	int pop()
	{
		if (!isempty())
			return stk[top--];
		else
		{
			cout << "stack is empty";
			return -2;
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



bool isBalanced(string expr)
{
	stack stk;
	char temp;

	
	for (int i = 0; i < expr.length(); i++)
	{
	
		switch (expr[i])
		{
		case '(':
		case '[':
		case '{':
		{
			stk.push(expr[i]);
			break;
		}
		case ')':

			
			temp = stk.seek();
			stk.pop();
			if (temp == '{' || temp == '[')
				return false;
			break;

		case '}':

			
			temp = stk.seek();
			stk.pop();
			if (temp == '(' || temp == '[')
				return false;
			break;

		case ']':

		{
			temp = stk.seek();
			stk.pop();
			if (temp == '(' || temp == '{')
				return false;
			break;
		}
		default:
			break;
		}
	}

	
	return (stk.isempty()); 
}


int priority(char ch)
{
	if (ch == '/' || ch == '*')
		return 2;
	else if (ch == '-' || ch == '+')
		return 1;
	else
		return -1;
}
int main() {
	stack stk_operators;
	string ip,post_fix;
	cin >> ip;
	int indexpf = 0;
	if (isBalanced(ip))
	{
		
		int length = ip.length();
		char c;

		for (int i = 0; i < length; i++)
		{
			if (isdigit(ip[i]))
			{
				post_fix[indexpf++]= ip[i];
			}
			else if (ip[i] == '(')
			{
				stk_operators.push(ip[i]);
			}
			else if (ip[i] == ')')
			{
				while (!stk_operators.isempty() && stk_operators.seek() != '(')
				{
					c = stk_operators.seek();
					stk_operators.pop();
					post_fix[indexpf++] += c;
				}
				if (stk_operators.seek() == '(') {
					c = stk_operators.seek();
					stk_operators.seek();
				}
			}
			else
			{
				while (!stk_operators.isempty() && priority(ip[i]) <= priority(stk_operators.seek())) {
					c = stk_operators.seek();
					stk_operators.pop();
					post_fix[indexpf++]= c;
				}
				stk_operators.push(ip[i]);
			}
		}
		while (!stk_operators.isempty()) {
			c = stk_operators.seek();
			stk_operators.pop();
			post_fix[indexpf++]= c;
		}
		cout << post_fix;

	}
	else {
		cout << "Not Balanced" << endl;
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}
	