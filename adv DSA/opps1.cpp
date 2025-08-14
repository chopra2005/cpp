#include<bits/stdc++.h>
using namespace std;
class student{

    string name = "abhay";
    int roll = 1;

    public:
    student(){
        cout<<"default constructoe is called"<<endl;
    }
    student(int a){
        cout<<a<<endl;
    }
    student(int a, int b){
        cout<<a+b<<endl;
    }
    student(int a , int b, int c){
        cout<<a+b+c<<endl;
    }


    void display(){
        cout<<name<<" "<<roll<<endl;
    }

};

int main(){
    student Abhay;
    Abhay.display();
    student shivam(1,2);
    
    

    return 0;
}