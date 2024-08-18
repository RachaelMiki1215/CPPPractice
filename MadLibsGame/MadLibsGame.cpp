// MadLibsGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string properNoun, noun1, feelingAdjective1, verb1;

    cout << "Enter a proper noun: ";
    getline(cin, properNoun);
    cout << "Enter a noun: ";
    getline(cin, noun1);
    cout << "Enter a feeling adjective: ";
    getline(cin, feelingAdjective1);
    cout << "Enter a verb: ";
    getline(cin, verb1);

    cout << "\nThis weekend I am going camping with " << properNoun << ".\n"
        "I packed my lantern, sleeping bag, and " << noun1 << ".\n"
        "I am so " << feelingAdjective1 << " to " << verb1 << " in a tent.\n";
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
