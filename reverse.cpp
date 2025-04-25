#include <iostream>
using namespace std;

int main(){

    int n , r=0;
    cout<<"enter a number:";
    cin>> n;

    int s=1;

    if(n<0){
        s= -1;
        n = -n;
    }

    while(n>0){
        int digit = n%10;
        r = r * 10 + digit;
        n = n/10;
    }

    r *= s;

    cout<<"Reversed number:" <<r<< endl;

    return 0;
}