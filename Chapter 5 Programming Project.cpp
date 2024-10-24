//Jacob Walrath
//10/24/2024
//Chapter 5 Programming Project
//Population

#include <iostream>

using namespace std;

int main()
{
    int organisms;
    double increase;
    int days;

    cout << "What is the starting number of organisms? Enter a number more than or equal to 2: ";
    cin >> organisms;
    while (organisms < 2)
    {
        cout << "You entered a starting number that was less than 2. Try again.\n";
        cout << "\nWhat is the starting number of organisms? Enter a number more than or equal to 2: ";
        cin >> organisms;
    }

    cout << "\nWhat is the average daily population increase (as a whole number percentage out of 100)? ";
    cin >> increase;
    while (increase < 0)
    {
        cout << "Do not enter a negative percentage!\n";
        cout << "\nWhat is the average daily population increase (as a whole number percentage out of 100)? ";
        cin >> increase;
    }
    if (increase > 0)
        increase = (increase / 100) + 1;
    //Converts value into an appropiate value for multiplying (e.g. 34% > 0.34 > 1.34, 1.34 * 1 = 1.34 (an increase of 34 percent)

    cout << "\nOver how many days will they multiply? ";
    cin >> days;
    while (days < 1)
    {
        cout << "Days cannot be less than one.\n";
        cout << "\nOver how many days will they multiply? ";
        cin >> days;
    }
    cout << "\n";

    double population = organisms * increase;
    int other_days = 1;
    while (days > 0)
    {
        cout << "Day " << other_days << " Population: " << population << "\n";
        days -= 1;
        other_days += 1;
        population *= increase;
    }

    return 0;
}
