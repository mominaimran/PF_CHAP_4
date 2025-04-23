#include <iostream>
#include <iomanip>
using namespace std;

const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

int main() {
    int accNumber, numOfPremChannels, numOfBasicServConn;
    char customerType;
    double amountDue;

    cout << fixed << showpoint << setprecision(2);
    
    cout << "This program computes a cable bill." << endl;

    cout << "Enter account number(in int):";
    cin >> accNumber;

    cout << "Enter customer type: " << "R for residential " << "B for business: ";
    cin >> customerType;

    switch(customerType){
        case 'r':
        case 'R':
            cout << "Enter number of premium channels: ";
            cin >> numOfPremChannels;

            amountDue = RES_BILL_PROC_FEES + RES_BASIC_SERV_COST + numOfPremChannels * RES_COST_PREM_CHANNEL;

            cout << "Account Number: " << accNumber << endl;
            cout << "Amount due: $" << amountDue << endl;
            break;
        case 'b':
        case 'B':
            cout << "Enter the number of basic service connections: ";
            cin >> numOfBasicServConn;
            
            cout << "Enter the number of premium channels: ";
            cin >> numOfPremChannels;

            if(numOfBasicServConn <= 10){
                amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + numOfPremChannels * BUS_COST_PREM_CHANNEL;
            }else{
                amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + (numOfBasicServConn - 10) * BUS_BASIC_CONN_COST + numOfPremChannels * BUS_COST_PREM_CHANNEL;
            }
            cout << "Acount Number: " << accNumber << endl;
            cout << "Amount Due: $" << amountDue << endl;
            break;
        default: 
            cout << "Invalid customer type." << endl;  
    }

    return 0;
}