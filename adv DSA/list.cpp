#include <bits/stdc++.h>
using namespace std;

 struct Student{
        int roll;
        string name;
        string address="HP";
    };

int main()
{

    //Student abhay;
    //abhay.name="abhay chopra";
    //abhay.roll=1;
    //cout<<abhay.roll<<endl;
    //cout<<abhay.address;

  Student isha;
  Student mayank;

  Student *prt;
  Student *mprt;

  prt=&isha;
  mprt=&mayank;

  cout<<&isha<<"  "<<prt<<endl;
  cout<<&mayank<<"  "<<mprt<<endl;


}   