#include <iostream>
using namespace std;

int main(){
    int n=5;

    for( int i = 1; i <= n; i++){
        int a = 1;
        for (int k = 1; k <= i; k++) {
            cout << " " << a;
            a+=2;
        }
        cout << endl;
    }

    return 0;
}


    

