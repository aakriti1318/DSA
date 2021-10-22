#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> v, int n){
    unordered_set<int> s;
    int ans = 0;
    for(int i=0;i<n;i++) s.insert(v[i]);
    for(int i=0;i<n;i++){
        if(s.find(v[i] - 1) == s.end()){
            int j = v[i];
            while(s.find(j) != s.end()){
                j++;
            }
            ans = max(ans,j-v[i]);
        }
    }
    return ans;
}

int main(){
    int n; cin>>n;
    // int sum; cin>>sum;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    // if(fun(v,n, sum)) cout<<"YES";
    // else cout<<"NO";
    cout<<fun(v,n);
}