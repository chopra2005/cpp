#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4, m = 3 ;

    int left[n] = {3,9,11,14};
    int right[m] = {8,9,13};

   int result[n+m];
   int i = 0, j = 0, k = 0;

    while(i<n && j<m){

        if(left[i]< right[j]){
            result[k] = left[i];
            k++;
            i++;
        }
        else{
            result[k] = right[j];
            k++;
            j++;
        }

    }
    while(i<n){
        result[k] = left[i];
        i++;
        k++;
    }
    while(j<m){
        result[k] = right[j];
        j++;
        k++;
    }
    for(int x = 0; x < k; x++){
        cout<<result[x]<< " ";
    }


}
