#include <iostream>
using namespace std;

int main(){
    int n=6;

    for( int i = 1; i <= n; i++){

        for (int k = 1; k <= n; k++) {
            if (i==k || i+k==n+1) cout << "*"; 
            else cout<< " ";     
      
    }
    cout << endl;
}
}

