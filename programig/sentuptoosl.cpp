#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b, c, sum;

    cout << "============================\n";
    cout << "   C++ Equation Calculator\n";
    cout << "============================\n";
    cout << "1. Find a\n";
    cout << "2. Find b\n";
    cout << "3. Find c\n";
    cout << "4. Find sum\n";
    cout << "5. Exit\n";
    cout << "Choose: ";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "Enter sum: ";
            cin >> sum;
            cout << "Enter b: ";
            cin >> b;
            cout << "Enter c: ";
            cin >> c;

            a = sum - b - c;

            cout << "a = " << a << endl;
            break;

        case 2:
            cout << "Enter sum: ";
            cin >> sum;
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter c: ";
            cin >> c;

            b = sum - a - c;

            cout << "b = " << b << endl;
            break;

        case 3:
            cout << "Enter sum: ";
            cin >> sum;
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;

            c = sum - a - b;

            cout << "c = " << c << endl;
            break;

        case 4:
            cout << "Enter a: ";
            cin >> a;
            cout << "Enter b: ";
            cin >> b;
            cout << "Enter c: ";
            cin >> c;

            sum = a + b + c;

            cout << "sum = " << sum << endl;
            break;

        case 5:
            cout << "Goodbye 😎" << endl;
            return 0;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
