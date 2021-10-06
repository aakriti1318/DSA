#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    int curr = 1, res = 1;
    for(int i=0;i<n-1;i++){
        if((arr[i]%2 == 0 and arr[i+1]&1) || 
            (arr[i]&1 and arr[i+1]%2 == 0)){
                curr++;
                res = max(res, curr);
        }
        else curr = 1;
    }
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    cout<<res;
    return 0;
}