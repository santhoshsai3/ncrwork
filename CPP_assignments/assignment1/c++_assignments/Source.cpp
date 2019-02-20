#include<iostream>
using namespace std;
class Time
{
	
	int hours, minutes, seconds;
public:
	Time()
	{
		hours = minutes = seconds = 0;
	}
	Time(int h, int m, int s) 
	{
		hours = h;
		minutes = m;
		seconds = s;
	}
	Time add(Time a)
	{
		int sec = a.seconds + seconds;
		int min = a.minutes + minutes;
		int h = a.hours + hours;
		if (sec > 59)
		{
			min++;
			sec = sec - 60;
		}
		if (min > 59)
		{
			h++;
			min = min - 60;
		}
		if (h > 23)
		{
			h = h - 24;
		}
		Time t;
		t.hours = h;
		t.minutes = minutes;
		t.seconds = seconds;
		return t;
	}
	void print()
	{
		cout << "Added times is ";
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
};
int main()
{
	Time a(11, 30, 30);
	Time b(5, 29, 51);
	Time c = a.add(b);
	c.print();
	
	system("pause");
}