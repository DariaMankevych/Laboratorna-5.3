// Laboratorna 5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Манькевич Дар'я
// Лабораторна робота № 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
//Варіант 10

#include <iostream>
#include <cmath>
using namespace std;
double y(const double x);
int main()
{
	double fp, fk, z;
	int n;
	cout << "fp = "; cin >> fp;
	cout << "fk = "; cin >> fk;
	cout << "n = "; cin >> n;
	double df = (fk - fp) / n;
	double f = fp;
	while (f <= fk)
	{
		z = y(f / 2) + pow(y(f + 1 - y(2*f)), 2);
		cout << f << " " << z << endl;
		f += df;
	}
	return 0;
}
double y(const double x)
{
	if (abs(x) >= 1)
		return (exp(x) / (1 + exp(x) + sin(x)));
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = -x * x / ((2 * j - 1) * 2 * j);
			a *= R;
			S += a;
		} while (j < 8);
		return S;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
