
#include<iostream>
using namespace std;
class Student
{
public:
	char *studentName;
	char grade;
	int marks[3];
};
class CollegeCourse
{
	
	Student std;
public:
	void set_Data(const char *s, int m1, int m2, int m3)
	{
		int len, i;
		for (len = 0; s[len] != '\0'; len++);
		std.studentName = (char *)malloc(sizeof(char)*(len + 1));
		for (i = 0; s[i] != '\0'; i++)
			std.studentName[i] = s[i];
		std.marks[0] = m1;
		std.marks[1] = m2;
		std.marks[2] = m3;
	}
	int calculateAverage()	{
		int ans = (std.marks[0] + std.marks[1] + std.marks[2]) / 3;
		return ans;
	}
	char computeGrade()
	{
		float avg = calculateAverage();
		if (avg > 60)
		{
			return 'A';
		}
		else if (avg > 50)
		{
			return 'B';
		}
		else if (avg > 40)
		{
			return 'C';
		}
		else
			return 'F';
	}
	void display()
	{
		cout << "Name of the student is ";
		cout<< std.studentName;
		char gr = computeGrade();
		std.grade = gr;
		cout << "The marks in each subject are\n";
		for (int i = 0; i < 3; i++)
		{
			cout << std.marks[i] << " ";
		}
		if (gr == 'A')
			printf("%s passed in first class\n", std.studentName);
		else if (gr == 'B')
			printf("%s passed in second class\n", std.studentName);
		else if (gr == 'C')
			printf("%s passed in third class\n", std.studentName);
		else
			printf("%s failed\n", std.studentName);
	}
};
int main()
{
	CollegeCourse cl1;
	cl1.set_Data("sandy", 31, 22, 13);
	cl1.display(); 
	system("pause");
	return 0;
}