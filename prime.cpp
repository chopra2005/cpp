#include <iostream>

using namespace std;

int main(){
    int num;

    cout<<"Enter a number:"<<endl;
    cin >> num;

    if(num <= 1){
        cout<<"not a prime number"<<endl;
        return 0;

    }
    else{

            for(int i = 2; i <= num/2; ++i){
            if(num % i == 0){
                cout<<"not a prime number"<<endl;
            }
            else{
                cout<<"is a prime number"<<endl;
                return 0;
            }
        }
    }

    }
