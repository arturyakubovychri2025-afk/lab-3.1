// lab_04_03.cpp
// Якубович Артур
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами
// Варіант 28

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
// a=2  c=-3  xp=-2  xk=2  dx=1
// a=0  c=5  xp=1  xk=3  dx=1

int main() {
    double x;
    double a;
    double c;
    double F;
    double xp, xk, dx;

    cout << "a = "; cin >> a;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "-----------------------" << endl;
    cout << "|" << setw(10) << "x" << "|" << setw(10) << "F" << "|" << endl;
    cout << "-----------------------" << endl;
    x = xp;
    while (x <= xk) {
        if ((c < 0) && (a != 0))
            F = -a * pow(x, 2);
        if ((c > 0) && (a == 0))
            F = (a - x) / (c * x);
        if (!(c < 0 && a != 0) && !(c < 0 && a == 0))
            F = x / c;
        cout << "|" << setw(10) << setprecision(2) << x << "|" << setw(10) << setprecision(2) << F << "|" << endl;
        x += dx;
    }
    cout << "-----------------------" << endl;
    F = 0;
    x = xp;
    cout << endl;
    cout << "-----------------------" << endl;
    cout << "|" << setw(10) << "x" << "|" << setw(10) << "F" << "|" << endl;
    cout << "-----------------------" << endl;


  do {
        if ((c < 0) && (a != 0))
            F = -a * pow(x, 2);
        if ((c > 0) && (a == 0))
            F = (a - x) / (c * x);
        if (!(c < 0 && a != 0) && !(c < 0 && a == 0))
            F = x / c;
        cout << "|" << setw(10) << setprecision(2) << x << "|" << setw(10) << setprecision(2) << F << "|" << endl;
        x += dx;
    } while (x <= xk);
    cout << "-----------------------" << endl;
    cout << endl;
    cout << "-----------------------" << endl;
    cout << "|" << setw(10) << "x" << "|" << setw(10) << "F" << "|" << endl;
    cout << "-----------------------" << endl;
    F = 0;
    x = xp;

    for (x; x <= xk; x += dx) {
        if ((c < 0) && (a != 0))
            F = -a * pow(x, 2);
        if ((c > 0) && (a == 0))
            F = (a - x) / (c * x);
        if (!(c < 0 && a != 0) && !(c < 0 && a == 0))
            F = x / c;
        cout << "|" << setw(10) << setprecision(2) << x << "|" << setw(10) << setprecision(2) << F << "|" << endl;
    }
    cout << "-----------------------" << endl;

    cout << endl;
    cout << "-----------------------" << endl;
    cout << "|" << setw(10) << "x" << "|" << setw(10) << "F" << "|" << endl;
    cout << "-----------------------" << endl;
    for (x = xk; x >= xp; x -= dx) {
        if ((c < 0) && (a != 0))
            F = -a * pow(x, 2);
        if ((c > 0) && (a == 0))
            F = (a - x) / (c * x);
        if (!(c < 0 && a != 0) && !(c < 0 && a == 0))
            F = x / c;
        cout << "|" << setw(10) << setprecision(2) << x << "|" << setw(10) << setprecision(2) << F << "|" << endl;
    }
    cout << "-----------------------" << endl;
    cin.get();
    return 0;
}