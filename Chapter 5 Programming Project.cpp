//Jacob Walrath
//10/24/2024
//Chapter 5 Programming Project
//master

#include <iostream>

using namespace std;

int main()
{
    char plus = '+';

    cout << "Pattern A\n";
    for (int count = 0; count < 10; count++)
    {
        for (int up = 0; up < (1 + count); up++)
        {
            cout << plus;
        }
        cout << endl;
    }

    cout << "\nPattern B\n";
    for (int count = 0; count < 10; count++)
    {
        for (int up = 0; up < (10 - count); up++)
        {
            cout << plus;
        }
        cout << endl;
    }

    return 0;
}
