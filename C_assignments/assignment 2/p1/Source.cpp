#include <stdafx.h>
#include<stdio.h>
int main()
{
	int n=12345, temp, sum=0;
	

	while (n != 0)
	{
		temp = n % 10;
		sum = sum * 10 + temp;
		n = n / 10;

	}
	printf("%d",sum);
}