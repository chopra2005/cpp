#include <iostream>

using namespace std;

int main(){

    for(int n=1;n<=100;n++){
    int a=0;

    if(n <= 1){
        cout<<"not a prime number"<<endl;
        return 0;

    }
    else{

            for(int i = 2; i <= n/2; ++i){
            if(n % i == 0){
                cout<<"not a prime number"<<endl;
                a=1;
                break;
            }
        }
            if (a==0){
                cout<<n<<endl;
            }
        
    }

    }
}
