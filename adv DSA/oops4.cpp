// C++ program to demonstrate inheritance

#include <iostream>
using namespace std;

// base class
class Animal {

   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : private Animal {

    string color="black";
 
   public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
    void display(){
        cout<<this->color<<endl;
    }
};

int main() {
    
   Dog tommy;
   tommy.display();
    

    return 0;
}