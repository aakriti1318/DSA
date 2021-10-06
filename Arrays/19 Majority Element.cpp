// An element should occur more than n/2 times in an array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    /*--------Naive--------*/
    // for(int i=0;i<n;i++){
    //     int count=1;
    //     for(int j=i+1;j<n;i++){
    //         if(arr[i] == arr[j]) count++;
    //     }
    //     if(count>n/2){
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<-1<<" ";
    // }

    /*-------Efficient--------*/

    
    return 0;
}