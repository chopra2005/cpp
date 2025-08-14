#include<bits/stdc++.h>
using namespace std;
class student{

    string name = "abhay";
    int roll = 000;

    public:
    student(){
        cout<<"default constructoe is called"<<endl;
    }
    student(string name , int roll){
        this->name=name;
        this->roll=roll;
        roll++;
        cout<<this->roll<<"  "<<roll<<endl;
    }
    

    void display(){
        cout<<name<<" "<<roll<<endl;
    }

};

int main(){
    student Abhay("abhay chopra",23);
   
    
    

    return 0;
}