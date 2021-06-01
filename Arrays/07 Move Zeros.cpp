#include<bits/stdc++.h>
using namespace std;

void naive_MoveZero(int arr[], int n){ // time: O(n^2)
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}

void eff_MoveZero(int arr[], int n){ // time: O(n)
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[count], arr[i]);
            count++;
        }
    }
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    naive_MoveZero(arr, n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    eff_MoveZero(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}