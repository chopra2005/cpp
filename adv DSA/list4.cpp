#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int roll=0;
    string name="ramjane";
    Node * next=NULL;
};

int main()
{
  Node one ,two,three,four;
  
  one.name="one panday";
  one.roll=95;
  two.name="two yadav";
  two.roll=54;
  three.name="three dev";
  three.roll=46;
  four.name="four khattar";
  four.roll=41;

  Node five;
  five.name="five singh";
  five.roll=100;
  


  one.next=&two;
   two.next=&three;
   three.next=&four;
   

   Node *head;
   head=&one;
   Node *temp = head;


   while(head->next!=NULL){
    
    head=head->next;
   }  
      
     head->next=&five;
     
     
     while(temp!=NULL){
    cout<<temp->name<<" "<<temp->roll<<endl;
    temp=temp->next;
    
   }
   
    
   
  



}