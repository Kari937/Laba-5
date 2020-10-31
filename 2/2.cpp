#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
double R(double x)
{
	double a = (x * 180) / M_PI;
	return a;
}
int main()
{
	setlocale(0, "");
	double x;
	cout << "Введите число в радианах ";
	cin >> x;
	double a = R(x);
	cout << "Число в градусах = " << a << endl;
	return 0;
}