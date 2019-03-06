#include<string>
#include<ctype.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	int length;
	string s;
	cin >> s;
	string s1;
	int flag1 = 0, flag2 = 0;
	if (s[0] == '-' || s[s.length() - 1] == '-')
	{
		cout << "invalid";
		getchar();
		getchar();
		return -1;
	}
	length = s.length();
		
	for (int i = 0; i < length; i++) {
		if (i + 1 < length && s[i + 1] != '-' || i == length - 1) {
			s1 += s[i];
		}
		else if (i + 1 < s.length() && i + 2 < s.length() && s[i + 1] == '-'&&s[i + 2] == '-') {
			cout << "invalid";
			system("pause");
			return 0;

		}
		else {
			if (isdigit(s[i]) && i + 1 < s.length() && i + 2 < s.length() && s[i + 1] == '-') {
				if (i + 2 < s.length() && isdigit(s[i + 2]) && s[i] < s[i + 2]) {
					int x = (int)s[i];
					x = x - 48;
					int y = (int)s[i + 2];
					y = y - 48;
					for (int i = x; i <= y; i++) {
						if (flag1 == 1) {
							flag1 = 0;
							continue;
						}
						char c = (char)(i + 48);
						s1 += c;
					}
					i = i + 2;
					if (s[i + 1] == '-') {
						flag1 = 1;
						i = i - 1;
					}
				}
				else {
					cout << "invalid";
					system("pause");
					return 0;
				}
			}
			else {
				if (isalpha(s[i]) && i + 1 < s.length() && i + 2 < s.length() && s[i + 1] == '-') {
					if (i + 2 < s.length() && isalpha(s[i + 2]) && s[i + 2] - s[i] <= 26) {
						int x = (int)s[i];
						int y = (int)s[i + 2];
						char c;
						for (int i = x; i <= y; i++) {
							if (flag2 == 1) {
								flag2 = 0;
								continue;
							}
							c = (char)i;
							s1 += c;
						}

						i = i + 2;
						if (s[i + 1] == '-') {
							flag2 = 1;
							i = i - 1;
						}
					}
					else {
						cout << "invalid";
						system("pause");
						return 0;
					}
				}
			}
		}
	}

	cout << s1;
	system("pause");
	return 0;
}