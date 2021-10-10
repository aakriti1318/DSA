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
        if(i%2 == 0){
            for(int j=0;j<m;j++){
                cout<<v[i][j]<<" ";
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<v[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}