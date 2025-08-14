#include <bits/stdc++.h>
using namespace std;
int main(){

    string str = "geekforcoding";
    vector<int>v(26,0);

    //fre vector
    for(auto i : str){
        v[i-'a']++;
    }

    //printing
    for(int i= 0; i < v.size(); i++){
        if(v[i]>0){
            char ch = 'a'+i;        

            cout<<ch<<" "<<v[i]<<endl;
        }
    }
}