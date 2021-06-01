#include<bits/stdc++.h>
using namespace std;

// time: O(n)

int it_delete(int arr[], int n, int key){ 
    int i;
    for(i=0;i<n;i++)
        if(arr[i] == key)
            break;
    
    if(i==n) return n;
    else{
        for(int j=i;j<n-1;j++){
            arr[j] = arr[j+1];
        }
        return n-1;
    }
}

int main(){
    int n, key; cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<it_delete(arr, n, key)<<endl;
    return 0;
}