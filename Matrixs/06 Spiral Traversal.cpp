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
    // Idea: Print Boundary Method
    
    int l = 0, h = m;
    while(l<=h){
        for(int i=l;i<h;i++) cout<<v[l][i]<<" ";
        for(int i=l+1;i<h;i++) cout<<v[i][h-1]<<" ";
        for(int i=h-2;i>=l;i--) cout<<v[h-1][i]<<" ";
        for(int i=h-2;i>=l;i--) cout<<v[i][l]<<" ";
        l++; h--;
    }
    return 0;
}