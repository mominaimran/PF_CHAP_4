#include <iostream>
#include <iomanip>
using namespace std;

// Constants for royalty options
const double OPTION1_DELIVERY_PAYMENT = 5000.0;
const double OPTION1_PUBLICATION_PAYMENT = 20000.0;

const double OPTION2_ROYALTY_RATE = 0.125; // 12.5%

const double OPTION3_RATE_FIRST_4000 = 0.10; // 10%
const double OPTION3_RATE_ABOVE_4000 = 0.14; // 14%
const int OPTION3_CUTOFF = 4000;

int main()
{
    double netPrice;
    int estimatedCopies;

    // Input
    cout << "Enter the net price of each copy of the novel: $";
    cin >> netPrice;

    cout << "Enter the estimated number of copies to be sold: ";
    cin >> estimatedCopies;

    // Option 1 Calculation
    double royaltiesOption1 = OPTION1_DELIVERY_PAYMENT + OPTION1_PUBLICATION_PAYMENT;

    // Option 2 Calculation
    double royaltiesOption2 = OPTION2_ROYALTY_RATE * netPrice * estimatedCopies;

    // Option 3 Calculation
    double royaltiesOption3;
    if (estimatedCopies <= OPTION3_CUTOFF)
    {
        royaltiesOption3 = OPTION3_RATE_FIRST_4000 * netPrice * estimatedCopies;
    }
    else
    {
        royaltiesOption3 = OPTION3_RATE_FIRST_4000 * netPrice * OPTION3_CUTOFF +
                           OPTION3_RATE_ABOVE_4000 * netPrice * (estimatedCopies - OPTION3_CUTOFF);
    }

    // Output royalties
    cout << fixed << setprecision(2);
    cout << "\nRoyalties under each option:\n";
    cout << "Option 1: $" << royaltiesOption1 << endl;
    cout << "Option 2: $" << royaltiesOption2 << endl;
    cout << "Option 3: $" << royaltiesOption3 << endl;

    // Determine and display the best option
    double maxRoyalty = max(royaltiesOption1, max(royaltiesOption2, royaltiesOption3));
    cout << "\nBest option for the author: ";
    if (maxRoyalty == royaltiesOption1)
    {
        cout << "Option 1 ✅" << endl;
    }
    else if (maxRoyalty == royaltiesOption2)
    {
        cout << "Option 2 ✅" << endl;
    }
    else
    {
        cout << "Option 3 ✅" << endl;
    }

    return 0;
}
