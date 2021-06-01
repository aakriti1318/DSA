#include<bits/stdc++.h>
using namespace std;

int trappingRainwater(int arr[], int n){  // time: theta(n) space: theta(n)
    int l[n],r[n];
    int res=0;
    l[0] = arr[0];
    for(int i=1;i<n;i++){
        l[i] = max(arr[i],l[i-1]);
    }
    r[n-1] = arr[n-1];
    for(int i=n-2;i>0;i--){
        r[i] = max(arr[i],r[i+1]);
    }
    for(int i=0;i<n;i++){
        res += min(l[i],r[i]) - arr[i];
    }
    return res;
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<trappingRainwater(arr,n)<<endl;
    return 0;
}
