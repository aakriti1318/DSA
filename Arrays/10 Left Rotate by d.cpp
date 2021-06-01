#include<bits/stdc++.h>
using namespace std;

void LeftRotateByOne(int arr[], int n){ // time: O(n)
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void naive_LeftRotateByd(int arr[],int n, int d){ // time: theta(n*d) aux space: theta(1)
    for(int i=0;i<d;i++){
        LeftRotateByOne(arr,n);
    }
}

void better_LeftRotateByd(int arr[], int n, int d){ // time: theta(n+d) aux space: theta(d)
    d = d%10;
    int tmp[d];
    for(int i=0;i<d;i++){
        tmp[i] = arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d] = arr[i]; 
    }
    for(int i=1;i<d;i++){
        arr[n-d+i] = tmp[i];
    }
}

void reverse(int arr[], int s, int e){ // time: theta(n) aux space: theta(1)
    while(s<e){
        swap(arr[s], arr[e]);
        s++; e--;
    }
}
void eff_LeftRotateByd(int arr[], int n, int d){
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

int main(){
    int n,d; cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    naive_LeftRotateByd(arr,n,d);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    better_LeftRotateByd(arr,n,d);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    eff_LeftRotateByd(arr,n,d);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}