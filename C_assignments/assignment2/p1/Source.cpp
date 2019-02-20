#include<iostream> 
using namespace std;

void decToBinary(int num)
{
	
	int bin[1000];

	 
	int i = 0;
	while (num > 0) {

		
		bin[i] = num % 2;
		num = num / 2;
		i++;
	}

	
	for (int j = i - 1; j >= 0; j--)
		cout << bin[j];
}


int binaryToDecimal(int n)
{
	int num = n;
	int dec = 0;

	int i = 1;

	int temp = num;
	while (temp)
	{
		int last= temp % 10;
		temp = temp / 10;

		dec += last * i;

		i = i * 2;
	}

	return dec;
}


int main()
{
	int num,ch;
	cin >> ch;
	switch (ch)
	{
	case 1:
		cin >> num;
		cout << binaryToDecimal(num) << endl;
		break;
	case 2:
		cin >> num;
		decToBinary(num);
		break;
	default:
		;


	}

	
	system("pause");
	return 0;
}