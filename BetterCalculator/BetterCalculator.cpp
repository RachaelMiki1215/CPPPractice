// BetterCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (a = add, s = subtract, m = multiply, d = divide): ";
    cin >> operation;

    switch (tolower(operation)) {
        case 'a':
            cout << num1 + num2;
            break;
        case 's':
            cout << num1 - num2;
            break;
        case 'm':
            cout << num1 * num2;
            break;
        case 'd':
            cout << num1 / num2;
            break;
        default:
            cout << "Invalid operator";
            break;
    }

    return 0;
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
