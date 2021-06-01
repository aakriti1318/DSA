#include<bits/stdc++.h>
using namespace std;

int getlarget(int arr[],int n){
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
    if(flag == true) return i;
    return -1;
}

int naive_SecmaxElement(int arr[], int n){ // time: O(n^2)
    int largest = getlarget(arr,n);
    int res = -1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res == -1) res = i;
            else if(arr[i]>arr[res]) res = i;
        }
    }
    return res;
}

int eff_SecmaxElement(int arr[], int n){ // time: O(n)
    int largest = arr[0];
    int res = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            res = largest;
            largest = arr[i];
        }
        else if(arr[i]!=largest){
            if(res == -1 || arr[i]>res){
                res = arr[i];
            } 
        }
    }
    return res;
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //cout<<naive_SecmaxElement(arr, n)<<endl;
    cout<<eff_SecmaxElement(arr,n)<<endl;
    return 0;
}