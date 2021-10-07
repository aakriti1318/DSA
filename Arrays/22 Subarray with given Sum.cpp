#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int k; cin>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    int curr = 0, start = 0;
    for(int i=0;i<n;i++){
        curr += arr[i];
        if(curr == k){
            cout<<"Subarrays with given sum is found from "<<
                start<<" to "<<i;
            return 1;
        }
        while(curr>k){
            curr = curr - arr[start];
            start++;
        }
    }
    cout<<"NO array";
    return 0;
}