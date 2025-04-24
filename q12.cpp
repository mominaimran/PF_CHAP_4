#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

int main() {
    double billingAmount, paymentAmount, credit = 0.0, penalty = 0.0, balance = 0.0;

    cout << "Enter your billing amount: $";
    cin >> billingAmount;

    cout << "Enter your payment amount: $";
    cin >> paymentAmount;

    cout << fixed << setprecision(2); // For formatting money values

    if (paymentAmount >= billingAmount) {
        credit = min(10.00, billingAmount * 0.01);
        cout << "Payment received in full." << endl;
        cout << "Credit on next bill: $" << credit << endl;
    }
    else {
        balance = billingAmount - paymentAmount;

        if (paymentAmount >= billingAmount * 0.5) {
            penalty = balance * 0.05;
        }
        else if (paymentAmount >= billingAmount * 0.2) {
            penalty = balance * 0.10;
        }
        else {
            penalty = balance * 0.20;
        }

        cout << "Remaining balance: $" << balance << endl;
        cout << "Penalty added: $" << penalty << endl;
    }

    return 0;
}
