#include<string>
#include<iostream>
using namespace std;
#define MAX 10


int main()
{
	int length, size = 0;
	int i = 0, indexj = 0;
	cout << "enter the size";
	cin >> length;
	cout << "enter the string";
	char* s1 = (char*)malloc((length+1) * sizeof(char));
	cin >> s1;
	cout <<"entered string: "<< s1;
	while (s1[size] != '\0')
		size++;
	char*s2 = NULL;
	s2 = (char*)malloc((size + MAX) * sizeof(char));
	if (s1[0] == '-' || s1[size - 1] == '-')
	{
		cout << "error: - present at ending or beginning";
		system("pause");
		return -1;
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		if ((s1[i + 1] == '-') && (s1[i] == '-'))
		{

			cout << "error: multiple -'s together";
			system("pause");
			return -1;
		}


		if (s1[i] == '-'&& (i+1)<=size)
		{
			if (s1[i + 1] < s1[i - 1]||(s1[i+1]-s1[i-1]>26))
					{
						cout << "\n error";
						system("pause");
						return -1;
					}
			if (isdigit(s1[i - 1]) && isalpha(s1[i + 1]) || isdigit(s1[i + 1]) && isalpha(s1[i - 1]))
			{
				cout << "\n error";
				system("pause");
				return -1;

			}
			int j = s1[i-1]+1;
			while (j <s1[i + 1])
			{
				s2[indexj++] = j;
				j++;
			}
			i = i + 1;

		}
		if(s1[i]!=s1[i-1])
			s2[indexj++] = s1[i];
	}
	s2[indexj] = '\0';
	cout << "\n after expansion: " << s2;
	system("pause");
	return 1;
}