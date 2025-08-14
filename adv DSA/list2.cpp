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
  Student one ,two,three,four;
  one.name="one panday";
  one.roll=95;
  two.name="two yadav";
  two.roll=54;
  three.name="three dev";
  three.roll=46;
  four.name="four khattar";
  four.roll=41;


  one.next=&two;
   two.next=&three;
   three.next=&four;

   Student *head;
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