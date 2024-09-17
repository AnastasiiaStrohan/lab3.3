// Lab_03_3.cpp
// Строган Анастасія
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 16
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double R1, R2; // вхідні параметри
    double y; // результат обчислення виразу

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі
    if (x <= -2) {
        y = -R1;
    }
    else 
        if (x > -2 && x <= 0) {
        y = (-R1 / 2) * x - R1;
    }
       else
            if (x > 0 && x <= 1) {
        y = R1 - sqrt(R1 * R1 - x * x);
    }
            else
                if (x > 1 && x <= 4) {
        y = sqrt(R2 * R2 - (x - R2) * (x - R2));
    }
               else
                    if (x > 4 && x <= 6) {
        y = (x - 4) * (R2 / 2);
    }
    else {
        y = 0; // Для випадків, коли x поза визначеним діапазоном
    }

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}