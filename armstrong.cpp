#include <iostream>
using namespace std;
int main() {
  int num, originalnum, temp, digit, n = 0, sum = 0;

  cout<<" Enter a number :"<<endl;
  cin>>num;

  originalnum = num;
  temp = num;

  while(temp != 0){
    temp = temp /10;
    n++;
  }

  temp = num;
  while(temp != 0){
    digit = temp % 10;
    int a = 1;
  
  for ( int i =0 ; i<n ; i++){
    a *= digit;

  }

  sum += a;
  temp /=10;
}

if (sum == num){
    cout<<"Armstrong number"<<endl;
}
else{
    cout<<"not an Armstrong number"<<endl;

}

return 0;


}