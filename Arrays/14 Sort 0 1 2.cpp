#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(v[i] == 0){
            swap(v[i],v[count]);
            count++;
        }
    }
    for(int i=count;i<n;i++){
        if(v[i] == 1){
            swap(v[i],v[count]);
            count++;
        }
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}