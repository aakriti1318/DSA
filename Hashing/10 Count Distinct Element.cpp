#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> v, int n, int k){
    unordered_map<int,int> m;
    int count = 0;
    for(int i=0;i<k;i++){
        if(m[v[i]] == 0) count++;
        m[v[i]]++;
    }
    cout<< count<< endl;
    for(int i=k;i<n;i++){
        if(m[v[i-k]] == 1) count--;
        m[v[i-k]]--;
        if(m[v[i]] == 0) count++;
        m[v[i]]++;
        cout<<count<<endl;
    }
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
    fun(v,n, sum);
}