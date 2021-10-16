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

    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(v[i][j], v[j][i]);
        }
    }
    for(int i=0;i<m;i++){
        int l = 0, r = n-1;
        while(l<r){
            swap(v[l][i], v[r][i]);
            l++; r--;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}