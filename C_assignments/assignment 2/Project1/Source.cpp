#include<iostream>
using namespace std;



int main(void)
{




	int n, temp, sum=0;
	cout << "enter n";
	cin >> n;
	while (n != 0)
	{
		temp = n % 10;
		sum = sum * 10 + temp;
		n = n / 10;
	}
	cout << sum;

	system("pause");
}