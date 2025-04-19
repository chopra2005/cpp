#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    

    int a = 0;

    // Special case for 0
    if (n == 0) {
        a = 1;
    } else {
        while (n > 0) {
            n = n / 10;  // Remove the last digit
            a++;
        }
    }

    cout << "Number of digits: " << a << endl;

    return 0;
}
