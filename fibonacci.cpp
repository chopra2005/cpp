#include <iostream>
using namespace std;
int main() {
    int n, first = 0, second = 1, next;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series up to " << n << " terms: ";

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }

     cout << std::endl;
    return 0;
}
