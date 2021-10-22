#include<bits/stdc++.h>
using namespace std;

int fun(vector<int> v, int n, int sum){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        if(v[i] == 0) v[i] = -1;
    }
    int presum = 0, res = 0;
    for(int i=0;i<n;i++){
        presum += v[i];
        if(presum == 0) res = i+1;
        if(m.find(presum) == m.end()) m.insert({presum,i});
        if(m.find(presum) != m.end()){
            res = i-m[presum];
        }
    }
    return res;
}

int main(){
    int n; cin>>n;
    int sum; cin>>sum;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    // if(fun(v,n, sum)) cout<<"YES";
    // else cout<<"NO";
    cout<<fun(v,n,sum);
}