#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    int c0=0, c1=0, c2=0;
    for(int i=0;i<n;i++){
        switch (arr[i]){
            case 0:
                c0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
        }
    }
    int j=0;
    while(c0>0){
        arr[j++] = 0;
        c0--;
    }
    while(c1>0){
        arr[j++] = 1;
        c1--;
    }
    while(c2>0){
        arr[j++] = 2;
        c2--;
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}