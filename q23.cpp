#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double diagonalLength, unitDiagonal, scale;
    int option, aspectWidth, aspectHeight;
    double realHeight, realWidth, area;

    cout << "Enter diagonal length of the screen in inches: ";
    cin >> diagonalLength;

    cout << "--- Select TV Type ---" << endl;
    cout << "1. Traditional TV (4:3)" << endl;
    cout << "2. LCD TV (16:9)" << endl;
    cout << "Select 1 or 2: ";
    cin >> option; 

    switch(option){
        case 1:
            aspectWidth = 4;
            aspectHeight = 3;
        break;
        case 2:
            aspectWidth = 16;
            aspectHeight = 9;
        break;
        default:
        cout << "Invalid Choice!" << endl;
        return 0;
    }

    unitDiagonal = sqrt(pow(aspectWidth, 2) + pow(aspectHeight, 2));
    scale = diagonalLength/unitDiagonal;

    realWidth = scale * aspectWidth;
    realHeight = scale * aspectHeight;
    area = realHeight * realWidth;

    cout << fixed << setprecision(2);
    cout << "--- TV Screen Dimensions ---" << endl;
    cout << "Screen length: " << realHeight << endl;
    cout << "Screen width: " << realWidth << endl;
    cout << "Screen area: " << area << endl;

    return 0;
}