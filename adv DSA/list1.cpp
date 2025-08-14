#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll=0;
    string name="ramjane";
    Student * next=NULL;
};
int main()
{
  Student mayank ,shivam,harsh,arjun;
  mayank.name="mayank panday";
  mayank.roll=95;
  shivam.name="shivam yadav";
  shivam.roll=54;
  harsh.name="harsh dev";
  harsh.roll=46;
  arjun.name="arjun khattar";
  arjun.roll=41;


  mayank.next=&shivam;
   shivam.next=&harsh;
   harsh.next=&arjun;

   Student *head;
   head=&mayank;
   while(head!=NULL){
    cout<<head->name<<" "<<head->roll<<endl;
    head=head->next;
   }

   

//    head=&mayank;
//    cout<<head->name<<endl;
//    head=mayank.next;
//    cout<<head->name;
//    head=mayank.next->next;
//    head=head->next;
//    head=head->next;
//    cout<<head<<endl;


}