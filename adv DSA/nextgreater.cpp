#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
   
    int value = -1;

    for(int i =0;i<n; i++){
        cin>>arr[i];

    }
    int ans[n];
    for(int i = 0 ; i<n;i++){
        ans[i]= -1;                  // vector<int>ans(n,-1);
    }
    for(int i =0; i<n; i++){

        for(int j = i+1; j<n ; j++){
            if(arr[i]<arr[j]){
                ans[i]=arr[j];
                break;
            }

        }
    }
    for(int i =0; i<n; i++)
    cout<<ans[i]<<" ";


}