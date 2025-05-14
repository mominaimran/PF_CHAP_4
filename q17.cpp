#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Variables to store input
    double priceColonial, priceSplitEntry, priceSingleStory;
    double areaColonial, areaSplitEntry, areaSingleStory;

    // Input base prices and areas
    cout << "Enter the base price and finished area (sq ft) for Colonial model: ";
    cin >> priceColonial >> areaColonial;

    cout << "Enter the base price and finished area (sq ft) for Split-Entry model: ";
    cin >> priceSplitEntry >> areaSplitEntry;

    cout << "Enter the base price and finished area (sq ft) for Single-Story model: ";
    cin >> priceSingleStory >> areaSingleStory;

    // Calculate price per square foot
    double ppsfColonial = priceColonial / areaColonial;
    double ppsfSplitEntry = priceSplitEntry / areaSplitEntry;
    double ppsfSingleStory = priceSingleStory / areaSingleStory;

    // Find the minimum price per square foot
    double minPrice = min(ppsfColonial, min(ppsfSplitEntry, ppsfSingleStory));

    // Output results
    cout << fixed << setprecision(2);
    cout << "\nPrice per square foot for each model:\n";
    cout << "Colonial: $" << ppsfColonial << endl;
    cout << "Split-Entry: $" << ppsfSplitEntry << endl;
    cout << "Single-Story: $" << ppsfSingleStory << endl;

    // Output model(s) with the least price per square foot
    cout << "\nModel(s) with the least price per square foot: ";
    bool found = false;
    if (ppsfColonial == minPrice) {
        cout << "Colonial ";
        found = true;
    }
    if (ppsfSplitEntry == minPrice) {
        cout << "Split-Entry ";
        found = true;
    }
    if (ppsfSingleStory == minPrice) {
        cout << "Single-Story ";
        found = true;
    }
    if (!found) {
        cout << "No model found (unexpected error)." << endl;
    }

    cout << endl;
    return 0;
}
