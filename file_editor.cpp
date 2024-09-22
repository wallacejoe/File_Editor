// A header file library, lets us work with input/output objects
#include <iostream>
// Includes the vector library
#include <vector>
// Includes the list library
#include <list>
// Allows for use of names from the standard library for objects
using namespace std;

void ReadFile(vector<list<string>> data)
{
    cout << "====================";
    for (list<string> ship : data)
    {
        cout << "\n";
        for (string value : ship)
        {
            cout << value + " ";
        }
    }
    cout << "====================";
}

// The built-in function for executing code
int main()
{
    // ShipName, Class, Manufacturer, Quantity
    vector<list<string>> studData =
        {
            {"Ship-1", "Class1", "M1", "3"},
            {"Ship-2", "Class1", "M1", "4"},
            {"Ship-4", "Class2", "M1", "1"},
            {"Ship-3", "Class2", "M2", "2"},
            {"Ship-5", "Class3", "M3", "3"}};

    string selection;
    while (selection != "0")
    {
        cout << "\n\n\n  0. Quit";
        cout << "\n  1. Read File";
        cout << "\n  2. Update File";
        cout << "\n  3. Search File";
        cout << "\n  Select a choice from the menu: ";
        cin >> selection;

        if (selection == "1")
        {
            ReadFile(studData);
        }

        if (selection == "2")
        {
        }

        if (selection == "3")
        {
        }
    }
    return 0;
}

// [X] Variables
// [X] Expressions
// [X] Conditionals
// [X] Loops
// [X] Functions
// [] Classes
// [X] Data structure from STL
// [X] Read from a file
// [] Write to a file

// [X] Create a basic interface for the program
// [X] Add stud data
// [] Add basic data manipulation
// [X] Implement basic file reading
// [] Add more complex data manipulation
// [] Transition to CSV file format
// [] Implement file writing
// [] Add data filter options
// [] Add error handling

// Final review, video demo, push to GitHub, and canvas submission
// Expected 15 hours of work
