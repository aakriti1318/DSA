#include<bits/stdc++.h>
using namespace std;

// time: Worst (at the beg) O(n)  best (at the end) O(1)
// avg: O(n)

int it_insert(int arr[], int n, int pos, int cap, int key){ 
    if(cap <= n) return n;
    else{
        for(int i = n-1;i>=pos;i--){
            arr[i+1] = arr[i];
        }
        arr[pos] = key;
    }
    return n+1;
}

int main(){
    int n,pos,cap,key; cin>>n>>pos>>cap>>key;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<it_insert(arr, n, pos, cap, key)<<endl;
    //cout<<rec_search(n)<<endl;
    return 0;
}