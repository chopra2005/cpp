#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, string> mp;
    mp[119] = "vikas";
    mp[200] = "abhay";
    mp[201] = "bandna";
     mp[202] = "Arjun";
     for(auto i :mp){
        cout<<i.first<<" ";
        cout<<i.second<<endl;
     }
}