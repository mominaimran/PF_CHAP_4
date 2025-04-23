#include <iostream>
using namespace std;

int main() {
    int totalCookies, cookiesPerBox, boxesPerContainer;
    int numberOfBoxes, leftoverCookies, numberOfContainers, leftOverBoxes;

    cout << "Enter total number of cookies: ";
    cin >> totalCookies;

    cout << "Number of cookies in a box: ";
    cin >> cookiesPerBox;

    cout << "Number of cookie boxes in a container: ";
    cin >> boxesPerContainer;

    numberOfBoxes = totalCookies / cookiesPerBox;
    leftoverCookies = totalCookies % cookiesPerBox;

    numberOfContainers = numberOfBoxes / boxesPerContainer;
    leftOverBoxes = numberOfBoxes % boxesPerContainer;

    cout << "\nYou can pack:\n";
    cout << numberOfBoxes << " full boxes of cookies.\n";
    cout << numberOfContainers << " full containers of boxes.\n";
    cout << "Leftover cookies (not enough for a full box): " << leftoverCookies << endl;
    cout << "Leftover boxes (not enough for a full container): " << leftOverBoxes << endl;

    return 0;
}