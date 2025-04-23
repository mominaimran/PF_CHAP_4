#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

int main() {
    double int1, int2;  // Use double to handle floating-point numbers
    char op;

    cout << "Enter number 1: ";
    cin >> int1;

    cout << "Enter number 2: ";
    cin >> int2;

    cout << "Enter operation to be performed (+, -, *, /): ";
    cin >> op;

    cout << fixed << setprecision(2);  // Format output to 2 decimal places

    if(op == '+'){
        cout << int1 << " + " << int2 << " = " << int1 + int2 << endl;
    }else if(op == '*'){
        cout << int1 << " * " << int2 << " = " << int1 * int2 << endl;
    }else if(op == '-'){
        cout << int1 << " - " << int2 << " = " << int1 - int2 << endl;
    }else if(op == '/'){
        if(int2 != 0){
            cout << int1 << " / " << int2 << " = " << int1 / int2 << endl;
        }else{
            cout << "Division by zero not possible!" << endl;
        }
    }else{
        cout << "Enter allowed operator only!" << endl;
    }

    return 0;
}
