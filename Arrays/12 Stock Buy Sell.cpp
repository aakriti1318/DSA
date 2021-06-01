#include<bits/stdc++.h>
using namespace std;

int naive_stockBuySell(int arr[], int s, int e){ // time: O(n^2)
    if(s>=e) return 0;
    int res = 0;
    for(int i=s;i<e;i++){
        for(int j=i+1;j<=e;j++){
            if(arr[j]>arr[i]){
                int curr = arr[j]-arr[i]+naive_stockBuySell(arr,s,i-1)+naive_stockBuySell(arr,j+1,e);
                res = max(curr,res);
            }
        }
    }
    return res;
}

int eff_stockBuySell(int arr[], int n){
    int res = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
            res += arr[i]-arr[i-1];
    }
    return res;
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<naive_stockBuySell(arr,0,n-1)<<endl;
    cout<<eff_stockBuySell(arr,n)<<endl;
    return 0;
}
