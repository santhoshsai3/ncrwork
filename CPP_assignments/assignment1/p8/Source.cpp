#include<iostream>
using namespace std;
class Employee
{
public:
	int x, y;
	Employee()
	{
		cout << " Default constructor" << endl;
	}
	Employee(int a, int b)
	{
		cout << "Parameterized constructor" << endl;
		x = a;
		y = b;
	}
	Employee(Employee &b)
	{
		cout << "Copy constructor" << endl;
		x = b.x;
		y = b.y;
	}
	~Employee()
	{
		cout << "In destructor" << endl;
	}
};

int main()
{
	Employee e1, e2(100, 200);
	
	Employee e3(e2);
	cout << "default constructor:" << sizeof(e1) << endl;
	cout<< "parameterized constructor:" << sizeof(e2) << endl;
	cout <<"copy constructor:"<< sizeof(e3) << endl;
	system("pause");
}
