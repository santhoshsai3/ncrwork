#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "n=";
	cin >> n;
	int ans = 0, t = 1;
	while (n > 0)
	{
		ans = (ans * t) + (n % 10);
		t = 10;
		n /= 10;
	}
	cout <<"reversed no.="<< ans << "\n";
	system("pause");
	return 0;
}