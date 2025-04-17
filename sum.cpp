#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n"<< std::endl;
    cin>>n;
    int sum = 0 ;
    for(int i=1;i<=n;i++){
        sum += i ;
    }
    
        cout<<sum<<std::endl;
    

    return 0;
}
