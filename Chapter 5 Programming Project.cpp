//Jacob Walrath
//10/24/2024
//Chapter 5 Programming Project
//master

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string town, file;
    int year, population = 0;

    cout << "What is the name of the town? ";
    getline(cin, town);
    cout << "What is the name of the data file (Include '.txt' in answer)? ";
    getline(cin, file);

    ifstream inputFile(file);

    if (inputFile)
    {
        cout << endl << town << " Population Growth\n";
        cout << "Each * represents 1,000 people\n" << endl;

        while (inputFile >> year)
        {
            cout << year << " ";

            inputFile >> population;
            population /= 1000;
            while (population > 0)
            {
                cout << "*";
                population -= 1;
            }

            cout << endl;
        }
        inputFile.close();
    }
    else
        cout << "\nError opening the file.\n";

    return 0;
}
