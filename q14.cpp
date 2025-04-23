#include <iostream>
using namespace std;

int main() {
    double hours;
    int fee;

    cout << "Enter the number of hours a car is parked: ";
    cin >> hours;

    if (hours <= 3) {
        fee = 5;
    } else if (hours <= 9) {
        int intValue = static_cast<int>(hours + 1);  // get int(h + 1)
        fee = 6 * intValue;
    } else {
        fee = 60;
    }

    cout << "Parking fee: " << fee << " rupees" << endl;

    return 0;
}