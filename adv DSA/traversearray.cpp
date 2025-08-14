#include <iostream>
using namespace std;

void solve(int arr[], int index, int n) {
    
    if (index == n)
        return;

    
    cout << arr[index] << " ";

    
    solve(arr, index + 1, n);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    solve(arr, 0, n);

    return 0;
}
