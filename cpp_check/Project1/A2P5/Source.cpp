#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class String_Class
{
	char *stringptr; 
	int length;
public:
	String_Class()
	{
		stringptr = NULL;
	}
	String_Class(char *temp)
	{
		length = strlen(temp);
		stringptr = new char[length + 1];
		strcpy(stringptr, temp);
	}
	String_Class(String_Class &s)
	{
		length = s.length;
		stringptr = new char[(length)+1];
		strcpy(stringptr, s.stringptr);
	}
	~String_Class()
	{
		//[] sptr;
	}
	String_Class operator+(String_Class s)
	{
		String_Class result;
		result.length = length + s.length;
		result.stringptr = new char[(result.length) + 1];
		strcpy(result.stringptr, stringptr);
		strcat(result.stringptr, s.stringptr);
		return result;
	}
	char operator[](int i)
	{
		return stringptr[i];
	}
	friend void display(String_Class s1);
	friend istream & operator>>(istream &in, String_Class &s);
	friend ostream & operator<<(ostream &out, String_Class &s);
};
void display(String_Class s1)
{
	cout << "\n" << s1.stringptr << "  " << s1.length << endl;
}

istream & operator>>(istream &in, String_Class &s)
{
	char n[50];
	cout << "\n Enter string : ";
	in >> n;
	s.length = strlen(n);
	s.stringptr = new char[(s.length) + 1];
	strcpy(s.stringptr, n);
	return in;
}
ostream & operator<<(ostream &out, String_Class &s1)
{
	cout << "\n" << s1.stringptr << "  " << s1.length << endl;
	return out;
}
int main()
{
	char n[10];
	cout << "\n Enter the string : ";
	cin >> n;
	String_Class s, s1(n), s2, s3;
	s2 = s1;
	display(s1);
	display(s2);
	s = s1 + s2;
	display(s);
	cin >> s3;
	cout << s3;
	int i;
	cout << "\n Enter the index : ";
	cin >> i;
	char c = s3[i];
	cout << " The value at index " << i << " is :" << c;
	cout << "\n";
	system("pause");
	return 0;
}