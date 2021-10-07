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
    /*------Naive------*/
    // int res = INT_MIN;
    // for(int i=0;i+k-1<n;i++){
    //     int sum=0;
    //     for(int j=0;j<k;j++)
    //         sum+=arr[i+j];
    //     res = max(res,sum);
    // }
    // cout<<res;

    /*------Efficient------*/
    int curr = 0;
    for(int i=0;i<k;i++) // O(k)
        curr += arr[i];
    int res = curr;
    for(int i=k;i<n;i++){ // O(n-k)
        curr = curr + arr[i] - arr[i-k];
        res = max(curr,res);
    }
    cout<<res;
    return 0;
}