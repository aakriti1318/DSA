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
    int curr = arr[0], res = arr[0];
    for(int i=1;i<n;i++){
        curr = max(curr+arr[i], arr[i]);
        res = max(res,curr);
    }
    cout<< res;
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    return 0;
}