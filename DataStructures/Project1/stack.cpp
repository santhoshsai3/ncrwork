#include<iostream>
using namespace std;


class stack
{
	int top;
	int *stk;
	int size;
	
public:
	/*stack()
	{
		abc.top = -1;
		abc.stk = NULL;
		abc.size = 0;

	}*/
	stack( )
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
		if (top == (size - 1))
			return true;
		else
			return false;
	}
	int isempty()
	{
		cout << top;
		return (top == -1);
		
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


int main()
{
	int i;
	stack s1;
	cout << s1.isempty();
	s1.push(1);
	cout << s1.isempty();
	s1.push(2);
	cout << s1.isempty();
	s1.push(3);
	cout << s1.isempty();
	s1.push(4);
	cout << s1.isempty();
	/*i = s1.pop();
	cout << i;
	i = s1.pop();
	cout << i;
	i = s1.pop();
	cout << i;
	i = s1.pop();
	cout << i;*/
	system("pause");
	return 0;
}