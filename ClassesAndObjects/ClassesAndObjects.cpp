// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        // This is a constructor.
        Book() {}
        // This is also a constructor. There can be multiple constructors.
        Book(string title, string author, int pages) {
            this->title = title;
            this->author = author;
            this->pages = pages;
        }

        ~Book()
        {

        }
};

class Student {
public:
    string name;
    string major;
    double gpa;

    Student(string name, string major, double gpa) {
        this->name = name;
        this->major = major;
        this->gpa = gpa;
    }

    // This is an object function.
    bool hasHonors() {
        return (gpa >= 3.5);
    }
};

class Movie {
private:
    string rating;

    bool inArray(string value, string *array, int length) {

    }

public:
    string title;
    string director;

    Movie(string title, string director, string rating) {
        this->title = title;
        this->director = director;
        this->rating = rating;
    }

    // The two functions below are an example of getters and setters.
    void setRating(string rating) {
        vector<string> ratings{"G", "PG", "PG-13", "R", "NC-17"};
        if (find(ratings.begin(), ratings.end(), rating) != ratings.end()) {
            this->rating = rating;
        }
        else {
            this->rating = "NR";
        }
    }

    string getRating() {
        return this->rating;
    }
};

int main()
{
    Book book1("Harry Potter", "J. K. Rowling", 500);
    Book book2("Lord of the Rings", "Tokein", 700);
    Book book3;

    cout << book1.title << "\n";

    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors() << "\n";

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("G");
    cout << avengers.getRating() << "\n";

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
