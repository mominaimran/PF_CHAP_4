#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double ROOMS_10_DISCOUNT = 0.1; 
    const double ROOMS_20_DISCOUNT = 0.2; 
    const double ROOMS_30_DISCOUNT = 0.3;
    const double DAYS_3_DISCOUNT = 0.05;

    int roomsBooked, days;
    double costPerRoom, salesTax, discount = 0.0;

    cout << "Enter the cost of renting one room: ";
    cin >> costPerRoom;

    cout << "Enter number of rooms booked: ";
    cin >> roomsBooked;

    cout << "Enter number of days the rooms booked: ";
    cin >> days;

    cout << "Enter sales Tax(as percent): ";
    cin >> salesTax;

    if(roomsBooked >= 10 && roomsBooked <= 19){
        discount = ROOMS_10_DISCOUNT;
    }else if(roomsBooked >= 20 && roomsBooked <= 29){
        discount = ROOMS_20_DISCOUNT;
    }else{
        discount = ROOMS_30_DISCOUNT;
    }

    if(days >= 3){
        discount += DAYS_3_DISCOUNT;
    }

    double discountedRoomCost = costPerRoom - (costPerRoom * discount);
    double totalBeforeTax = discountedRoomCost * roomsBooked * days;
    double taxAmount = totalBeforeTax * (salesTax/100.00);
    double totalBill = totalBeforeTax + taxAmount;

    cout << fixed << setprecision(2);
    cout << "\n========= BILL SUMMARY =========" << endl;
    cout << "Cost per room: $" << costPerRoom << endl;
    cout << "Discount applied: " << (discount * 100) << "%" << endl;
    cout << "Number of rooms: " << roomsBooked << endl;
    cout << "Number of days: " << days<< endl;
    cout << "Total before tax: $" << totalBeforeTax << endl;
    cout << "Sales tax: $" << taxAmount << endl;
    cout << "Total bill: $" << totalBill << endl;

    return 0;
}