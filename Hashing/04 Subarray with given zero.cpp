#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {3,2,1,4,13,-3,-10};
    int n=7;
    unordered_set<int> s;
    int presum = 0;
    for(int i=0;i<n;i++){
        presum+=a[i];
        if(s.find(presum)!=s.end()) cout<<"YES";
        if(presum == 0) cout<<"YES";
        s.insert(presum);
    }

    return 0;
}