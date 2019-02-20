#include<iostream>
using namespace std;
void swap_value(int x, int y)
{
	int i;
	i = x;
	x = y;
	y = i;
}
void swap_reference(int &x, int &y)
{
	int i = 0;
	i = x;
	x = y;
	y = i;
}
int main()
{
	cout << "enter the numbers:";
	int a, b;
	cin >> a >> b;
	
		cout << "enter the choice\n";
		cout << "1. Swap using call by value\n2. Swap using call by reference\n";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "value of a and b before swapping using call by value\n" << a << " " << b << endl;
			swap_value(a, b);
			cout << "value of a and b after swapping using call by value\n" << a << " " << b << endl;
			break;
		case 2:
			cout << "value of a and b after swapping using call by reference\n" << a << " " << b << endl;
			swap_reference(a, b);
			cout << "value of a and b after swapping using call by reference\n" << a << " " << b << endl;
			break;
	
		default: cout << "Enter the correct choice\n";
		}
	
	
	system("pause");
	return 0;
}