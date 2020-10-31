#include <iostream>
using namespace std;
int Palindrom(int a)
{
	if (a >= 10000 && a <= 99999)
	{
		if (a % 10 == a / 10000 && (a / 10) % 10 == (a / 1000) % 10)
		{
			cout << "Введенное число ЯВЛЯЕТСЯ палиндромом" << endl;
		}
		else
		{
			cout << "Введенное число НЕ ЯВЛЯЕТСЯ палиндромом" << endl;
		}
	}
	else
	{
		cout << "Не пятизначное число" << endl;
	}
	return a;
}
int main()
{
	setlocale(0, "");
	int a;
	cout << "Введите число: ";
	cin >> a;
	Palindrom(a);
	return 0;
}