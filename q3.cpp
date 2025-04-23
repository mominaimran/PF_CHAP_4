#include <iostream>
using namespace std;

int main() {
    int num;
    char ch;

    cout << "Enter an integer between 0 and 35: ";
    cin >> num;

    if(num <= 9){
        cout << "You entered: " << num << endl;
    }else if(num >= 10 && num <= 35){
        ch = static_cast<char>(num - 10 + 'A');
        cout << "Output: " << ch;
    }else{
        cout << "Invalid input!";
    }

    return 0;
}