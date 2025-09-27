// Lab_4.2.cpp
// Щур Божена
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 27


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x, xp, xk, dx, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "-------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(15) << "y" << " |" << endl;
    cout << "-------------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        double part = fabs(9 * pow(x, 3) + 2); // |9x^3 + 2|

        if (x < 4) {
            y = part + (3 * pow(x, 5) - pow(x, 3) + 2 * x - 1);
        }
        else if (x >= 4 && x < 7) {
            y = part + atan((x - 2) / 3.0);
        }
        else { // x >= 7
            y = part + log10(pow(2, 1.0 / x) + exp(3 * x + 1));
        }

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(15) << setprecision(5) << y << " |" << endl;

        x += dx;
    }

    cout << "-------------------------------------" << endl;

    return 0;
}# lab_4.2
