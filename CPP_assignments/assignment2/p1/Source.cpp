#include<iostream>
using namespace std;
class polar
{
	float angle, radius;
public:
	static int count;
	polar()
	{
		count++;
		angle = radius = 0.0;
	}
	polar(float a, float r)
	{
		count++;
		angle = a;
		radius = r;
	}
	~polar()
	{
		
		count--;
	}
};
int polar::count;
int main()
{
	polar a, b, c(1.0, 2.0), d(2.1, 9.4);
	cout << "number of active objects are\n";
	cout << polar::count << endl;
	
	system("pause");
	return 0;
}