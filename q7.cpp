#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    int discriminant = pow(b, 2) - 4*a*c;

    if(discriminant > 0){
        cout << "Equation has two real roots." << endl;
        double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        double root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    }else if(discriminant < 0){
        cout << "Equation has two complex roots." << endl;
    }else{
        cout << "Equation has single root." << endl;
        double root = -b / (2.0 * a);
        cout << "Root: " << root << endl;
    }

    return 0;
}