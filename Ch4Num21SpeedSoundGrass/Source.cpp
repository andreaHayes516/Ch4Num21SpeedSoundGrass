/************************************************
** Author: Andrea Hayes
** Date: March 7th, 2020
** Purpose: Select from a Menu then calculate speed of sound
** Input: Menu selection for medium then speed
** Processing: Menu selection, input validation for menu choice and speed, 
               and calculate distance away.
** Output: Display a menu, enter number of seconds, display distance
*************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

const double CARBON_DIOXIDE = 258.0; // Speed of mediums in meters/second
const double AIR = 331.5; 
const double HELIUM = 972.0;
const double HYDROGEN = 1270.0;

int main() {

    const int carbonDioxide = 1; // choice input
    const int air = 2;
    const int helium = 3;
    const int hydrogen = 4;

    int choice;

    double seconds, choiceRate, meters;

    cout << "Possible Mediums" << endl; // Displays menu
    cout << "1. Carbon Dioxide" << endl;
    cout << "2. Air" << endl;
    cout << "3. Helium" << endl;
    cout << "4. Hydrogen" << endl;
    cout << "Please select from the following menu." << endl;
    cin >> choice;

    cout << fixed << setprecision(2) << showpoint;

    if (choice < 0 || choice > 4) { // Choice must be between 1 and 4
        cout << "Please input a valid number between 1 and 4." << endl;
        return 1;
    }
    switch (choice) { // Using switch to figure speed/second after selection is made.
    case carbonDioxide:
        choiceRate = CARBON_DIOXIDE;
        break;
    case air:
        choiceRate = AIR;
        break;
    case helium:
        choiceRate = HELIUM;
        break;
    case hydrogen:
        choiceRate = HYDROGEN;
        break;
    }
    cout << "Enter the number of seconds it took for the sound to get from" << endl; 
    cout << "its source to the location it was detected: ";
    cin >> seconds;
    if (seconds < 0 || seconds > 30) { // Seconds must be between 0 and 30
        cout << "Please enter seconds between 0-30.";
        return 1;
    }
        meters = seconds * choiceRate; // Calculates the distance
        cout << "The source of the sound was " << meters << " meters away." << endl;
    return 0;
}