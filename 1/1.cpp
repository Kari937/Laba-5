#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() 
{
	vector<int> simplies;
	bool issimple = true;
	//Находим простые числа
	for (int i = 2; i < 200; i++) 
	{
		issimple = true;
		for (int g = 2; g < 200; g++) 
		{
			if (i > g && (i % g) == 0)
				issimple = false;
		}
		if (issimple)
			simplies.push_back(i);
	}
	// Выводим простые числа
	for (int i = 0; i < simplies.size(); i++)
		cout << simplies[i] << endl;
	return 0;
}