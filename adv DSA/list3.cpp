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
  Node one ,two,three,four,five;
  one.name="one panday";
  one.roll=95;
  two.name="two yadav";
  two.roll=54;
  three.name="three dev";
  three.roll=46;
  four.name="four khattar";
  four.roll=41;
  five.name="five singh";
  five.roll=100;


  one.next=&two;
   two.next=&three;
   three.next=&four;
   four.next=&five;

   Node *head;
   head=&one;
   int targetroll=46;
   bool found = false;
    while (head != NULL) {
        if (head->roll == targetroll) {
            found = true;
            break;
        }
        head = head->next;
    }
    if (found)
        cout <<"true" << endl;
    else
        cout << "false" << endl;

    return 0;
   
  



}