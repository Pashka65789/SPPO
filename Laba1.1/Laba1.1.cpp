﻿#include <iostream>
#include <cmath>

using namespace std;

double F1(int x)
{
	double f = 0;
	if (x >= 0)
	{
		x = 5 * pow(x, 3) + 2 * pow(x, 2);
	}
	else
	{
		x = -x - 2;
	}
	return x;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int start;
	cout << "ВВидите start =";
	cin >> start;
	int stop;
	cout << "Ввидите stop =";
	cin >> stop;
	for (int i = start; i < stop; i++)
	{
		double f = F1(i);
		cout << "i = " << i << "; F1(i) = " << f << endl;
	}
	system("pause");
	return 0;
}