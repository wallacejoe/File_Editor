// A header file library, lets us work with input/output objects
#include <iostream>
// Includes the vector library
#include <vector>
// Includes the list library
#include <list>
// Allows for the use of files
#include <iostream>
#include <fstream>
// Used for splitting sentences
#include <sstream>
// Allows for use of names from the standard library for objects
using namespace std;

class File
{
private:
    string _filename;
    vector<vector<string>> _data;

public:
    File(string filename)
    {
        _filename = filename;
    }

    void ReadFile()
    {
        string text;
        ifstream MyReadFile(_filename);
        // Loop through each line in the file
        while (getline(MyReadFile, text))
        {
            vector<string> words;
            stringstream ss(text);
            string word;

            // Separate values by comma
            while (getline(ss, word, ','))
            {
                words.push_back(word);
            }

            _data.push_back(words);
        }
        // Close the file
        MyReadFile.close();
    }

    void DisplayData()
    {
        cout << "\n====================";
        for (vector<string> line : _data)
        {
            cout << "\n";
            for (string value : line)
            {
                cout << value + " ";
            }
        }
        cout << "\n====================";
    }

    string GetFilename()
    {
        return _filename;
    }
};

string SearchUpdateMenu()
{
    string input;
    cout << "\n\n\n  0. Cancel";
    cout << "\n  1. Search by Name";
    cout << "\n  2. Search by Class";
    cout << "\n  3. Search by Manufacturer";
    cout << "\n  4. Search by Quantity";
    cout << "\n  Select a choice from the menu: ";
    cin >> input;

    return input;
}

// The built-in function for executing code
int main()
{
    string selection;
    string filename;

    cout << "\nEnter the path for the file you'd like to use: ";
    cin >> filename;
    File file(filename);
    file.ReadFile();
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
            file.DisplayData();
        }

        if (selection == "2")
        {
            string input = SearchUpdateMenu();
        }

        if (selection == "3")
        {
            string input = SearchUpdateMenu();
        }
    }
    return 0;
}

// [X] Variables
// [X] Expressions
// [X] Conditionals
// [X] Loops
// [X] Functions
// [X] Classes
// [X] Data structure from STL
// [X] Read from a file
// [] Write to a file

// [X] Create a basic interface for the program
// [X] Add stud data
// [X] Add basic data manipulation
// [X] Implement basic file reading
// [X] Add more complex data manipulation
// [] Transition to CSV file format
// [] Implement file writing
// [X] Add data filter options
// [] Add error handling

// Final review, video demo, push to GitHub, and canvas submission
// Expected 15 hours of work
