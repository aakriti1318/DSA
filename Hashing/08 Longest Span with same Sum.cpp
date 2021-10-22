#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {0,1,0,0,0,0};
    int b[] = {1,0,1,0,0,1};
    int n = 6;
    unordered_map<int,int> m;
    int presum = 0, res = 0;
    for(int i=0;i<n;i++){
        a[i] = a[i] - b[i];
    }
    for(int i=0;i<n;i++){
        presum += a[i];
        if(presum == 0) res = i+1;
        if(m.find(presum) == m.end()) m.insert({presum,i});
        if(m.find(presum)!=m.end()) res = max(res, i-m[presum]);
    }
    cout<< res;
    return 0;
}