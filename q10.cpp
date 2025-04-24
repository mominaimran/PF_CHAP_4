#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double payRate, hoursPerWeek, grossIncome, netIncome;
    double clothes, supplies, savingBonds, parentContribution;
    double remainingAfterClothesSupplies;

    const double TAX = 0.14;
    const double CLOTHES_PERCENT = 0.10;
    const double SUPPLIES_PERCENT = 0.01;
    const double MAX_BOND_PERCENT = 0.25;
    const int WEEKS = 5;

    // Input
    cout << "Enter your hourly pay rate: ";
    cin >> payRate;

    cout << "Enter number of hours worked per week: ";
    cin >> hoursPerWeek;

    // Base calculations
    grossIncome = payRate * hoursPerWeek * WEEKS;
    netIncome = grossIncome * (1 - TAX);
    clothes = netIncome * CLOTHES_PERCENT;
    supplies = netIncome * SUPPLIES_PERCENT;
    remainingAfterClothesSupplies = netIncome - clothes - supplies;

    // User decides how much to spend on savings bonds
    cout << "Enter the amount you want to spend on savings bonds: ";
    cin >> savingBonds;

    // Conditional parent contribution
    if (savingBonds == 0) {
        parentContribution = remainingAfterClothesSupplies * 0.01;
    } else if (savingBonds <= netIncome * MAX_BOND_PERCENT) {
        parentContribution = (savingBonds * 0.25) + (remainingAfterClothesSupplies * 0.01);
    } else {
        parentContribution = (savingBonds * 0.40) + (remainingAfterClothesSupplies * 0.02);
    }

    // Output
    cout << fixed << setprecision(2) << endl;
    cout << "Income before tax: $" << grossIncome << endl;
    cout << "Income after tax: $" << netIncome << endl;
    cout << "Money spent on clothes and accessories: $" << clothes << endl;
    cout << "Money spent on school supplies: $" << supplies << endl;
    cout << "Money spent on savings bonds: $" << savingBonds << endl;
    cout << "Money contributed by parents: $" << parentContribution << endl;

    return 0;
}
