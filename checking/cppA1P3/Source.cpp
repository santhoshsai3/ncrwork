
#include<iostream>
using namespace std;
class Complex
{

	float real;
	float imag;
public:
	Complex()
	{
		real = imag = 0.0f;
	}
	Complex(float val)
	{
		real = imag = val;
	}
	Complex(float r, float img)
	{

		real = r;
		imag = img;

	}

	friend Complex addComplex(const Complex &a, const Complex &b);
	friend Complex mulComplex(const Complex &a, const Complex &b);
	void display()
	{
		if (imag < 0)
		{
			cout << real << (imag) << "i" << endl;
		}
		else
		{
			cout << real << "+" << (imag) << "i" << endl;
		}
	}
};
Complex addComplex(const Complex &a, const Complex &b)
{
	Complex res;
	res.real = a.real + b.real;
	res.imag = a.imag + b.imag;
	return res;
}
Complex mulComplex(const Complex &a, const Complex &b)
{
	Complex res;
	res.real = (a.real*b.real) - (a.imag*b.imag);
	res.imag = (a.real*b.imag) + (a.imag*b.real);
	return res;
}
int main()
{
	float r1, r2, i1, i2;
	cout << "enter the real ang img parts of first complex numbers:";
	cin >> r1 >> i1;
	cout << "enter the real ang img parts of second complex numbers:";
	cin >> r2 >> i2;
	Complex c1(r1, i1), c2(r2, i2), c3, c4;
	c3 = addComplex(c1, c2);
	c1.display();
	cout << endl;
	c2.display();
	cout << endl;
	c4 = mulComplex(c1, c2);
	cout << "Addition:";
	c3.display();
	cout << endl << "Multiplication:";
	c4.display();

	system("pause");
	return 0;
}
