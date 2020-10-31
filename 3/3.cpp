#include <iostream>
using namespace std;
double A(double a, double b, double c)
{
	double x = (a + b + c) / 3;
	return x;
}
int main()
{
	setlocale(0, "");
	double a;
	double b;
	double c;
	cout << "Введите числа a, b и c: ";
	cin >> a >> b >> c;
	double x = A(a, b, c);
	cout << "Среднее арифметичесткое = " << x << endl;
	return 0;
}
