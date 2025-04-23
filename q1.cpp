#include <iostream>
using namespace std;

int main() {
    float num;

    cout << "Enter a number: ";
    cin >> num;

    if(num > 0){
        cout << "Number you entered: " << num << endl;
        cout << num << " is greater than 0." << endl;
    }else if(num < 0){
        cout << "Number you entered: " << num << endl;
        cout << num << " is less than 0." << endl;
    }else{
        cout << "You entered 0." << endl;
    }

    return 0;
}