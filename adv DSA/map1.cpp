#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "coding blocks";
    map<char, int> mp;
    
     for(auto i :s){
        mp[i] = mp[i]+1;
     }
    for(auto i: mp){
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }
}