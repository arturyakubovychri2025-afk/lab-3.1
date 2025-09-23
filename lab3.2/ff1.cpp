// lab_03_02.cpp
// Якубович Артур
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами
// Варіант 28

#include <iostream>
using namespace std;
int main() {
	double x;
	double a;
	double c;
	double F;

	cout << "a = "; cin >> a;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі
	if ((a < 0) && (x != 0))
		F = -a * pow(x, 2);
	if ((c > 0) && (a == 0))
		F = (a - x) / c * x;
	else
		F = 1 + (x / c);
	cout << endl;
	cout << "1) F = " << F << endl;

	// спосіб 2: рогалуження в повній формі
	if (c < 0 && a != 0)
		F = -a * pow(x, 2);
	else
		if (c > 0 && a == 0)
			F = (a - x) / c * x;
		else
			F = 1 + (x / c);
	cout << "F = " << F << endl;

	cin.get();
	return 0;
}