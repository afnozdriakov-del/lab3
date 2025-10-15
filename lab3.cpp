#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;

    cout << "=============================\n";
    cout << "        М Е Н Ю\n";
    cout << "=============================\n";
    cout << "1 – If15: сума двох найбільших чисел\n";
    cout << "2 – If26: обчислення функції f(x)\n";
    cout << "3 – Варіант 25: точка у фігурі\n";
    cout << "4 – Вихід\n";
    cout << "-----------------------------\n";
    cout << "Ваш вибір: ";
    cin >> choice;
    cout << endl;

    // -------------------- ЗАВДАННЯ 1 --------------------
    if (choice == 1) {
        double a, b, c;
        cout << "Введіть три числа: ";
        cin >> a >> b >> c;

        double smallest;
        if (a <= b && a <= c)
            smallest = a;
        else if (b <= a && b <= c)
            smallest = b;
        else
            smallest = c;

        double sum_two_max = a + b + c - smallest;
        cout << "Сума двох найбільших чисел = " << sum_two_max << endl;
    }

    // -------------------- ЗАВДАННЯ 2 --------------------
    else if (choice == 2) {
        double x, f;
        cout << "Введіть x: ";
        cin >> x;

        if (x <= 0)
            f = -x;
        else if (x > 0 && x < 2)
            f = x;
        else // x >= 2
            f = x;

        cout << "f(x) = " << f << endl;
    }

    // -------------------- ЗАВДАННЯ 3 --------------------
    else if (choice == 3) {
        double x, y, r, a;
        cout << "Введіть координати точки (x, y): ";
        cin >> x >> y;
        cout << "Введіть радіус кола r: ";
        cin >> r;
        cout << "Введіть сторону великого квадрата a: ";
        cin >> a;

        // Умови для помаранчевої області (варіант 25)
        if (x > 0 && y < 0 && (x * x + y * y >= r * r) &&
            fabs(x) <= a / 2 && fabs(y) <= a / 2) {
            cout << "Точка належить помаранчевій області." << endl;
        } else {
            cout << "Точка НЕ належить помаранчевій області." << endl;
        }
    }

    // -------------------- ВИХІД --------------------
    else if (choice == 4) {
        cout << "Програма завершена." << endl;
    }

    else {
        cout << "Невірний вибір!" << endl;
    }

    return 0;
}
