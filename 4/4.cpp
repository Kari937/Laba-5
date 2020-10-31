#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	double R, S;
	cout << "Введите радиус окружности: ";
	cin >> R;
	S = 3.14 * R * R;
	cout << "Площадь круга с заданным радиусом = " << S << "" << endl;
	return 0;
}