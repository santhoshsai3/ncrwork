#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
int stringLen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}

char* stringCat(char* s1, char* s2)
{
	int i, j;
	for (i = 0; s1[i] != '\0'; ++i);

	for (j = 0; s2[j] != '\0'; ++j, ++i)
	{
		s1[i] = s2[j];
	}

	s1[i] = '\0';

	return s1;
}


char* stringCopy(char* source, char* destination) {
	int i = 0;
	for (i = 0; source[i] != '\0'; ++i)
	{
		destination[i] = source[i];
	}

	destination[i] = '\0';
	return destination;
}


int stringCmp(char * destination, const char* source)
{
	while (*destination == *source)
	{
		if (*destination == '\0' || source == '\0')
			break;
		destination++;
		source++;
	}

	if (*destination == '\0' || source == '\0')
		return 1;
	else
		return 0;
}

char* stringRev(char *s)
{
	char temp;
	int i, j;
	for (i = 0, j = stringLen(s) - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	return s;
}


int main()
{
	int choice, res;
	char *str1;
	str1 = (char*)malloc(100 * sizeof(char));
	char *str2;
	str2 = (char*)malloc(100 * sizeof(char));
	printf("enter the choice:\n");
	printf("1.stringCopy\n2.stringCat\n3.strRev\n4.stringCmp\n");
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1:
		{
		cout << "enter source string: " << endl;
		getchar();
		scanf_s("%[^\n]s", str2, 50);
		stringCopy(str2, str1);
		printf("Copied string is :%s\n", str1);
		break;
		}
	case 2:
	{
		cout << "enter source string: " << endl;
		getchar();
		scanf_s("%[^\n]s", str1, 50);
		getchar();
		scanf_s("%[^\n]s", str2, 50);
		stringCat(str1, str2);
		printf("Concatenated String is: %s\n", str1);
		break;
	}
	case 3:
	{
		cout << "enter string to be reversed:";
		getchar();
		scanf_s("%[^\n]s", str1, 30);
		printf("Reversed string is %s", stringRev(str1));
		break;
	}

	case 4:
	{
		cout << "enter strings:";
		getchar();
		gets_s(str1, 99);
		getchar();
		gets_s(str2, 99);
		res = strcmp(str1, str2);
		if (res == 1)
			printf("Strings are equal\n");
		else
			printf("Strings are not equal\n");
		break;
	}
	default:
	{
		cout << "invalid choice";
		break;
	}

	}
	
	system("pause");
	free(str1);
	free(str2);
	return 0;
}