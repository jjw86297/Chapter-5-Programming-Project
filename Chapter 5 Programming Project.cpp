//Jacob Walrath
//10/24/2024
//Chapter 5 Programming Project
//Student_Lineup

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name;
    int students = 0;

    ifstream inputFile("LineUp.txt");

    while (inputFile >> name)
    {
        students += 1;
        if (students == 1)
        {
            cout << name << " is at the front of the line.\n";
        }
    }
    cout << name << " is at the back of the line.\n" << endl;

    cout << "There are " << students << " students in the class.\n";
    
    inputFile.close();
    return 0;
}
