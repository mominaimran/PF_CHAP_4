#include <iostream>
using namespace std;

int main() {
    int int1, int2;
    char op;

    cout << "Enter integer 1: ";
    cin >> int1;

    cout << "Enter integer 2: ";
    cin >> int2;

    cout << "Enter operation to be performed(+, -, *, /): ";
    cin >> op;

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
            cout << "Division by zero not possible!";
        }
    }else{
        cout << "Enter allowed operator only!" << endl;
    }

    return 0;
}