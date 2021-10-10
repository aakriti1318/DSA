#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin>>n>>m;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        vector<int> mat;
        for(int j=0;j<m;j++){
            int x; cin>>x;
            mat.push_back(x);
        }
        v.push_back(mat);
    }
    int x; cin>>x;
    int l=0, r=m-1;
    while(l<n and r>=0){
        if(v[l][r] == x){
            cout<<l+1<<","<<r+1;
            break;
        }
        else if(v[l][r]<x) l++;
        else r--;
    }
    return 0;
}