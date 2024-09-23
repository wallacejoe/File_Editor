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

    void SearchFile(int value = 0, string input = "", bool search = false)
    {
        cout << "\n====================";
        for (vector<string> line : _data)
        {
            if (line[value] == input || search == false)
            {
                cout << "\n";
                for (string value : line)
                {
                    cout << value + " ";
                }
            }
        }
        cout << "\n====================";
    }

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
        SearchFile();
    }

    int SearchUpdateMenu()
    {
        string input = "0";
        cout << "\n\n\n  0. Cancel";
        cout << "\n  1. Search by Name";
        cout << "\n  2. Search by Class";
        cout << "\n  3. Search by Manufacturer";
        cout << "\n  4. Search by Quantity";
        cout << "\n  Select a choice from the menu: ";
        cin >> input;

        if (input == "1")
        {
            return 0;
        }
        else if (input == "2")
        {
            return 1;
        }
        else if (input == "3")
        {
            return 2;
        }
        else if (input == "4")
        {
            return 3;
        }
        else
        {
            return 4;
        }
    }

    void Search()
    {
        int parameter = SearchUpdateMenu();

        if (parameter == 4)
        {
        }
        else
        {
            string input;
            cout << "\n\nInput the keyword to search for: ";
            cin >> input;
            SearchFile(parameter, input, true);
        }
    }

    string GetFilename()
    {
        return _filename;
    }
};

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
        cout << "\n  2. Search File";
        cout << "\n  3. Update File";
        cout << "\n  Select a choice from the menu: ";
        cin >> selection;

        if (selection == "1")
        {
            file.DisplayData();
        }

        if (selection == "2")
        {
            file.Search();
        }

        if (selection == "3")
        {
            // file.Update();
        }
    }
    return 0;
}

// [] Add error handling

// Final review, video demo, push to GitHub, and canvas submission
// Expected 15 hours of work
