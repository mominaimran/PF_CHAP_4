#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string gender;
    double bodyWeight, wrist, waist, hip, forearm;
    double A1, A2, A3, A4, A5, B, bodyFat, bodyFatPercent;

    cout << "Enter gender (male/female): ";
    cin >> gender;

    cout << "Enter body weight (in pounds): ";
    cin >> bodyWeight;

    if (gender == "female" || gender == "Female") {
        cout << "Enter wrist measurement (at fullest point): ";
        cin >> wrist;
        cout << "Enter waist measurement (at navel): ";
        cin >> waist;
        cout << "Enter hip measurement (at fullest point): ";
        cin >> hip;
        cout << "Enter forearm measurement (at fullest point): ";
        cin >> forearm;

        A1 = (bodyWeight * 0.732) + 8.987;
        A2 = wrist / 3.140;
        A3 = waist * 0.157;
        A4 = hip * 0.249;
        A5 = forearm * 0.434;
        B = A1 + A2 - A3 - A4 + A5;
        bodyFat = bodyWeight - B;
        bodyFatPercent = (bodyFat * 100) / bodyWeight;
    }
    else if (gender == "male" || gender == "Male") {
        cout << "Enter waist measurement (at navel): ";
        cin >> waist;

        A1 = (bodyWeight * 1.082) + 94.42;
        A2 = waist * 4.15;
        B = A1 - A2;
        bodyFat = bodyWeight - B;
        bodyFatPercent = (bodyFat * 100) / bodyWeight;
    }
    else {
        cout << "Invalid gender entered. Please enter 'male' or 'female'.\n";
        return 1;
    }

    // Output results
    cout << fixed << setprecision(2);
    cout << "\nYour total body fat is: " << bodyFat << " lbs" << endl;
    cout << "Your body fat percentage is: " << bodyFatPercent << "%" << endl;

    return 0;
}
