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

    // using binary search 
    /*
    int res = INT_MIN;
    for(int i=0;i<n;i++){
        int x = binary_search(v[i].begin(), v[i].end(),1);
        res = max(res,m-x);
    }
    cout<<res;
    */
    int res = INT_MIN;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=m-1;j>=0;j--){
            if(v[i][j]==1){
                count++;
            }
            else if(v[i][j] == 0){
                break;
            }
        }
        res = max(res,count);
    }
    cout<<res;
    return 0;
}