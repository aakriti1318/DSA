#include<bits/stdc++.h>
using namespace std;

int naive_maxDiff(int arr[], int n){ // time: O(n^2)
    int res = arr[1]-arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            res = max(res, arr[j]-arr[i]);
        }
    }
    return res;
}

int eff_maxDiff(int arr[], int n){
    int minval = arr[0];
    int res = arr[1]-arr[0];
    for(int i=1;i<n;i++){
        res = max(res,arr[i]-minval);
        minval = min(minval,arr[i]);
    }
    return res;
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<naive_maxDiff(arr,n)<<endl;
    cout<<eff_maxDiff(arr,n)<<endl;
    return 0;
}
