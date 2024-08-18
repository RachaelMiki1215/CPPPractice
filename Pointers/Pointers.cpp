// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";

    // The ampersand here orders the compiler to print out the memory address (pointer) of the variable.
    cout << "Age:" << &age << "\n";
    cout << "GPA: " << &gpa << "\n";
    cout << "Name: " << &name << "\n";

    // Pointer variable storing pointer of the age veriable.
    // NOTE: Pointer variables have to have the same data type as the variable it is pointing to.
    int* pAge = &age;
    cout << "Age Ponter: " << pAge << "\n";

    // Dereferencing (grabbing actual value from memory address of) a pointer.
    cout << *pAge << "\n";

    // Just FYI: You can chain pointers & dereferencing however much you want to.
    cout << *&gpa;

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
