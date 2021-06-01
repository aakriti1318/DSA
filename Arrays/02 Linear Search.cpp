#include<bits/stdc++.h>
using namespace std;

int it_search(int arr[], int n, int key){ // time: Unsorted O(n) Sorted O(log n)
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == key){
            return i+1;
            break;
        }
    }
    return -1;
}

int main(){
    int n,key; cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<it_search(arr, n, key)<<endl;
    //cout<<rec_search(n)<<endl;
    return 0;
}