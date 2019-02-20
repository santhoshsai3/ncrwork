#include<iostream>
using namespace std;
inline void add(int a,int b)
{
	cout<<"sum= ";
	cout<<a+b<<endl;
}
inline void sub(int a,int b)
{
	cout<<"Difference= ";
	cout<<a-b<<endl;
}
inline void mul(int a,int b)
{
	cout<<"Multiplication=";
	cout<<a*b<<endl;
}
inline void divi(int a,int b)
{
	
		cout<<"Division=";
		cout<<a/b;
	
	
}
inline void mod(int a,int b)
{
		cout<<"remainder= ";
		cout<<a%b;
	
}
int main()
{
	int a,b;

		cout<<"enter the numbers\n";
		cin>>a>>b;
		cout<<"Enter the operation you want\n";
		cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulu\n";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1: 
				add(a,b);
				break;
			case 2:	
				sub(a,b);
				break;
			case 3:	
				mul(a,b);
				break;
			case 4: 
				divi(a,b);
				break;
			case 5:	
				mod(a,b);
				break;
			
		}
		system("pause");
	return 0;
}