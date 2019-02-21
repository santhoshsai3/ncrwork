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
			cout << x;

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
			cout << int(stk[top--]-48);

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

int main()
{   
	stack1 s1;

	char str[20];
	cin >> str;
	for (int i = 0; str[i] != '\0'; i++)
	{   if(isdigit(str[i]))
				s1.push((str[i]));
	}
	s1.pop();


	system("pause");
	return 0;
}