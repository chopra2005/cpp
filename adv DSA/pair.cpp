#include <bits/stdc++.h>
using namespace std;

int main(){

vector<pair<int,string>>v;

v.push_back({32,"abhay"});
v.push_back({41,"arjun"});
v.push_back({3,"ankita"});
v.push_back({46,"hahaha"});
sort(v.begin(),v.end());

for(auto i:v){
    cout<<i.first<<" "<<i.second<<endl;
}


}