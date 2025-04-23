#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double area;
    int numVeggies;
    double portion1 = 100, portion2 = 0;

    cout << "Enter total farm area (in acres): ";
    cin >> area;

    cout << "Enter number of vegetables you want to grow (1 or 2): ";
    cin >> numVeggies;

    if (numVeggies == 2) {
        cout << "Enter percentage of land for vegetable 1: ";
        cin >> portion1;
        cout << "Enter percentage of land for vegetable 2: ";
        cin >> portion2;

        if (portion1 + portion2 != 100) {
            cout << "Error: Total land percentage must be 100%." << endl;
            return 1;
        }
    }

    // Vegetable 1 input and calculations
    double seed1, plant1, fert1, labor1, price1;
    cout << "\n--- Vegetable 1 ---" << endl;
    cout << "Enter seed cost per acre: ";
    cin >> seed1;
    cout << "Enter plantation cost per acre: ";
    cin >> plant1;
    cout << "Enter fertilizing cost per acre: ";
    cin >> fert1;
    cout << "Enter labor cost per acre: ";
    cin >> labor1;
    cout << "Enter selling price per acre: ";
    cin >> price1;

    double costPerAcre1 = seed1 + plant1 + fert1 + labor1;
    double land1 = (portion1 / 100) * area;
    double revenue1 = land1 * price1;
    double cost1 = land1 * costPerAcre1;

    // Vegetable 2 input and calculations (if any)
    double revenue2 = 0, cost2 = 0;
    if (numVeggies == 2) {
        double seed2, plant2, fert2, labor2, price2;
        cout << "\n--- Vegetable 2 ---" << endl;
        cout << "Enter seed cost per acre: ";
        cin >> seed2;
        cout << "Enter plantation cost per acre: ";
        cin >> plant2;
        cout << "Enter fertilizing cost per acre: ";
        cin >> fert2;
        cout << "Enter labor cost per acre: ";
        cin >> labor2;
        cout << "Enter selling price per acre: ";
        cin >> price2;

        double costPerAcre2 = seed2 + plant2 + fert2 + labor2;
        double land2 = (portion2 / 100) * area;
        revenue2 = land2 * price2;
        cost2 = land2 * costPerAcre2;
    }

    // Final calculations
    double totalRevenue = revenue1 + revenue2;
    double totalCost = cost1 + cost2;
    double profitOrLoss = totalRevenue - totalCost;

    // Output
    cout << fixed << setprecision(2);
    cout << "\n======= FARM SUMMARY =======" << endl;
    cout << "Total Revenue: $" << totalRevenue << endl;
    cout << "Total Cost: $" << totalCost << endl;

    if (profitOrLoss > 0) {
        cout << "Profit: $" << profitOrLoss << endl;
    } else if (profitOrLoss < 0) {
        cout << "Loss: $" << -profitOrLoss << endl;
    } else {
        cout << "Break-even. No profit, no loss." << endl;
    }

    return 0;
}
