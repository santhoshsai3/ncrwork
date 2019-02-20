#include<iostream>
using namespace std;
class Distance2;
class Distance1
{
public:
	int metres;
	int centi;
	Distance1()
	{
		metres = 0;
		centi = 0;
	}
	Distance1(int m, int cent)
	{
		metres = m;
		centi = cent;
	}
	friend Distance1 addFunction1(Distance1, Distance2);
	void display()
	{
		cout << metres << " metres and " << centi << " centimetres" << endl;
	}
};
class Distance2
{
public:

	int feet;
	int inches;
	Distance2()
	{
		feet = inches = 0;
	}
	Distance2(int x, int y) 
	{
		feet = x;
		inches = y;
	}
	friend Distance2 addFunction2(Distance1, Distance2);
	void display()
	{
		cout << feet << " feet " << inches << " inches\n";
	}
};
Distance1 addFunction1(Distance1 a, Distance2 b)
{
	long int tmp = a.metres * 100 + a.centi;
	long int tmp2 = b.feet * 12 + b.inches;
	float ans = tmp2 / 2.54;
	Distance1 temp;
	temp.metres = (int)ans / 100;
	temp.centi = ((int)ans) % 100;
	return temp;
}
Distance2 addFunction2(Distance1 a, Distance2 b)
{
	long int tmp = a.metres * 100 + a.centi;
	long int tmp2 = b.feet * 12 + b.inches;
	float ans = tmp2 * 2.54;
	Distance2 temp;
	temp.feet = (int)ans / 12;
	temp.inches = ((int)ans) % 12;
	return temp;
}
int main()
{
	Distance1 d1(12, 31), res;
	Distance2 d2(12, 7), res1;
	
		cout << "enter the choice you want";
		cout << "1. convert inches to centimetres\n2. convert centimetres to inches\n";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:	res = addFunction1(d1, d2);
			res.display();
			break;
		case 2: res1 = addFunction2(d1, d2);
			res1.display();
			break;
		
		default: cout << "enter the correct choice \n";
		
	}
	
	system("pause");
	return 0;
}