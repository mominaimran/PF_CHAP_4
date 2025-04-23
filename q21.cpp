#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    double slope, intercept;

    cout << "Enter coordinates of first point: ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point: ";
    cin >> x2 >> y2;

    if (x1 == x2){
        cout << "The line is vertical." << endl;
        cout << "Equation of the line: x = " << x1 << endl;
    } else if (y1 == y2){
        cout << "The line is horizontal." << endl;
        cout << "Equation of the line: y = " << y1 << endl;
    } else {
        slope = static_cast<double>(y2 - y1) / (x2 - x1);
        intercept = y1 - (slope * x1);

        cout << "The line is ";
        if (slope > 0){
            cout << "increasing." << endl;
        } else {
            cout << "decreasing." << endl;
        }

        cout << "Equation of the line: y = " << slope << "x ";
        if (intercept > 0)
            cout << "+ " << intercept << endl;
        else if (intercept < 0)
            cout << "- " << -intercept << endl;
        else
            cout << endl; // just y = mx
    }

    return 0;
}