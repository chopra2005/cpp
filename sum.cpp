#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
              // cout<<n*(n+1)/2;

    int sum = 0 ;            
    for(int i=1;i<=n;i++){
        sum += i ;
    }
    
        cout<<sum<<endl;
    

    return 0;
}
