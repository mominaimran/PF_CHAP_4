#include <iostream>
using namespace std;

int main() {
    int a, b, c, temp;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Step 1: Make sure a <= b
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    // Step 2: Make sure a <= c
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    // Step 3: Make sure b <= c
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

// if (a > b) swap(a, b);
// if (a > c) swap(a, c);
// if (b > c) swap(b, c);

    cout << "Numbers in ascending order: " << a << " " << b << " " << c << endl;

    return 0;
}
