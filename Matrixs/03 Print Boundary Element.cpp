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

    if(n == 1){
        for(int i=0;i<m;i++) cout<<v[0][i]<<" ";
    }
    else if(m == 1){
        for(int i=0;i<n;i++) cout<<v[i][0]<<" ";
    }
    else{
        for(int i=0;i<m;i++){
            cout<<v[0][i]<<" ";
        }
        for(int i=1;i<n;i++){
            cout<<v[i][m-1]<<" ";
        }
        for(int i=1;i<m;i++){
            cout<<v[n-1][i]<<" ";
        }
        for(int i=1;i<n;i++){
            cout<<v[i][0]<<" ";
        }
    }
    return 0;
}