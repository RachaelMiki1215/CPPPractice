// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


class Chef {
public:
    void makeChicken() {
        cout << "The chef makes chicken.\n";
    }
    void makeSalad() {
        cout << "The chef makes salad.\n";
    }
    void makeSpecialDish() {
        cout << "The chef makes a special dish.\n";
    }
};

// Inherits from Chef class.
class ItalianChef: public Chef {
public:
    void makePasta() {
        cout << "The chef makes pasta!\n";
    }
    void makeSpecialDish() {
        cout << "The chef makes chicken parm.\n";
    }
};


int main()
{
    Chef chef;
    chef.makeChicken();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();
    italianChef.makePasta();
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
