// leaders in an array

// if it is the largest from its right side

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    int curr = arr[n-1];
    cout<<arr[n-1]<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>curr){
            curr = arr[i];
            cout<<curr<<" ";
        }
    }
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    return 0;
}