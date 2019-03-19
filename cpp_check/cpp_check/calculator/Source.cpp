#include <string>
#include <stack>
#include <iostream>
#include<math.h>
using namespace std;
int precedence(char op) {
	if (op == '+' || op == '-')
		return 1;
	if (op == '*' || op == '/')
		return 2;
	if (op == '^')
		return 3;
	return 0;
}

double Operation(double a, double b, char op) {
	switch (op) {
	case '+': return a + b;
	case '-': return a - b;
	case '*': return a * b;
	case '/': return a / b;
	case '^': return pow(a, b);

	}
}

double evaluate(string str) {
	int i;
	stack <double> values;

	stack <char> ops;

	for (i = 0; i < str.length(); i++) {

		if (str[i] == ' ')
			continue;

		else if (str[i] == '(') {
			ops.push(str[i]);
		}

		else if (isdigit(str[i])) {
			double val = 0;
			double val1 = 0;
			int count = 0;
			int flag1 = 0;
			while (i < str.length() && (isdigit(str[i]) || (str[i] == '.')))
			{
				if (str[i] == '.') {
					flag1 = 1;
					i++;
				}
				if (flag1 == 0) {

					val = (val * 10) + (str[i] - '0');
					i++;
				}
				else {
					val1 = (val1 * 10) + (str[i] - '0');
					i++;
					++count;
				}
			}
			i--;


			if (val1 != 0) {
				values.push(val + (val1 / pow(10, count)));
			}
			else {
				values.push(val);
			}
		}


		else if (str[i] == ')')
		{
			while (!ops.empty() && ops.top() != '(')
			{
				double val2 = values.top();
				values.pop();

				double val1 = values.top();
				values.pop();

				char op = ops.top();
				ops.pop();

				values.push(Operation(val1, val2, op));
			}


			ops.pop();
		}


		else
		{
			while (!ops.empty() && precedence(ops.top())
				>= precedence(str[i])) {
				double val2 = values.top();
				values.pop();

				double val1 = values.top();
				values.pop();

				char op = ops.top();
				ops.pop();

				values.push(Operation(val1, val2, op));
			}


			ops.push(str[i]);
		}
	}


	while (!ops.empty()) {
		double val2 = values.top();
		values.pop();

		double val1 = values.top();
		values.pop();

		char op = ops.top();
		ops.pop();

		values.push(Operation(val1, val2, op));
	}
	


		return values.top();
}

int main() {
	string s;
	cin >> s;
	cout << evaluate(s);
	system("pause");
	return 0;
}