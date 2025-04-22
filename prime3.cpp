#include <iostream>
using namespace std ;

int main(){

    int n = 5,a =0;

    if (n<=1){
        cout<<"not a prime number"<<endl;

    }
    else{

        for(int i = 2; i <= n/2; ++i){
            if(n % i == 0){
                cout<<"not a prime number"<<endl;
                a=1;

                 }
}
if (a==0){
    cout<<"is a prime number"<<endl;
}

    }
}