#include <iostream>
using namespace std;

int main() {
    int num;
    bool is_prime = true; // Assume the number is prime initially

    cout << "Enter a number: ";
    cin >> num;

    // Handle edge cases
    if (num <= 1) {
        is_prime = false;
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = false; // Not a prime number
                break;
            }
        }
    }

    if (is_prime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
