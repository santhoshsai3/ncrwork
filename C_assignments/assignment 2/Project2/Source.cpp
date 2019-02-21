#include<iostream>
using namespace std;

int isprime(int);
int main(void)
{
	int b1, b2,temp;
	cout << "enter the boundaries";
	cin >> b1;
	cin >> b2;
	int i=b1;
	while (i < b2)
	{
		temp = isprime(i);
		if (temp == 1)
			cout << i;
		i++;

	}
	system("pause");
	return 0;
}


int isprime(int a)
{
	int i;
	for (i = 2; i < a; i++)
	{
		if ((a%i) == 0)
			break;

	}
	if (i == a)
		return 1;
	else return 0;
}