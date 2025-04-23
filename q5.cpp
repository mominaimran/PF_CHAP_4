#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double len1, len2, len3;
    
    cout << "Enter lengths of a triangle: ";
    cin >> len1 >> len2 >> len3;

    if(pow(len1,2) == pow(len2, 2) + pow(len3, 2) || pow(len2,2) == pow(len1, 2) + pow(len3, 2) || pow(len3,2) == pow(len1, 2) + pow(len2, 2)){
        cout << "It is a right angle triangle!";
    }else{
        cout << "It is not a right angle triangle";
    }

    return 0;
}