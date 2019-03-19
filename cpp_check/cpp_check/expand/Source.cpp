#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void expand_string(char *s1, char *s2)
{
	int i = 0, j = 0;
	char c;
	int length = strlen(s1);
	if (s1[0] == '-' || s1[length - 1] == '-')//hiphen at begining or ending
	{
		cout<<"cannot have hyphen at front or back";
		system("pause");
		exit(0);
	} 
	while ((c = s1[i++]) != '\0')
	{
		if (s1[i] == '-'&&s1[i + 1] == c)//hiphen with same char
		{
			s2[j++] = c;
			i = i + 2;

		}
		else if (s1[i] == '-'&&s1[i + 1] < c || s1[i+1]-s1[i-1]>=26) //valid expressions
		{
			cout << "invalid expression";
			system("pause");
			exit(0);

		}
		else if (s1[i] == '-'&&s1[i + 1] > c)
		{
			i++;
			while (c < s1[i])
			{
				s2[j++] = c++;
			}
		}

		else if (s1[i] == '-'&&s1[i + 1] == '-')//simultaneous hiphens
		{
			cout<<" two continuous hyphens ";
		}
		else
			s2[j++] = c;
	}
	s2[j] = '\0';

}
int main()
{
	char *string1 = new char[20];
	char *string2 = new char[40];
	cout << "Enter string 1:";
	cin >> string1;
	expand_string(string1, string2);
	cout << "\n Expanded string is:" ;
	cout << string2;
	delete[] string1; //to avoid memory leak
	delete[] string2;   //to avoid memory leak
	system("pause");
	return 0;
}