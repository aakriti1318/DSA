#include<bits/stdc++.h>
using namespace std;

int naive_maxElement(int arr[], int n){ // time: O(n^2)
    bool flag;
    int i;
    for(i=0;i<n;i++){
        flag = true;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                flag = false;
                break;
            }
        }
    }
    if(flag == true) return arr[i];
    return -1;
}

int eff_maxElement(int arr[], int n){ // time: O(n)
    int res = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>res){
            res = arr[i];
        }
    }
    return res;
}

int inbuilt_maxElement(int arr[],int n){ // time: theta(n)
    return *max_element(arr,arr+n);
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<naive_maxElement(arr, n)<<endl;
    cout<<eff_maxElement(arr,n)<<endl;
    cout<<inbuilt_maxElement(arr,n)<<endl;
    return 0;
}