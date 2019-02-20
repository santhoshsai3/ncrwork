#include<iostream>
#include<math.h>
using namespace std;
class Pt
{

	int x, y;
public:
	Pt()
	{
		x = y = 0;
	}
	Pt(int m, int n)
	{
		x = m;
		y = n;
	}
	friend double findDistance(const Pt &a, const Pt &b);
};
double findDistance(const Pt &a, const Pt &b)
{
	
	double ans = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
	return ans;
}
int main()
{
	Pt p1(1, 2), p2(1, -4);
	double res = findDistance(p1, p2);
	cout << "distance = " << res << endl;
	system("pause");
	return 0;
}