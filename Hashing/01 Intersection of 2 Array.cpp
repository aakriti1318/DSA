#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {10,15,20,15,30,30,5};
    int b[] = {30,5,25,80};
    int n = 7, m = 4;
    unordered_set<int> s;
    for(int i=0;i<n;i++) s.insert(a[i]);
    int res = 0;
    for(int j=0;j<m;j++){
        if(s.find(b[j])!=s.end()){
            res++;
            s.erase(b[j]);
        }
    }
    cout<<res;
    return 0;
}