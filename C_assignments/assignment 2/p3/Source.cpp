#include<iostream>
using namespace std;
  

int main(void)
{
	int i, n,fact=1;
	cout << "enter the number";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	cout << "factorial:" << fact;
	system("pause");
	return 0;
}