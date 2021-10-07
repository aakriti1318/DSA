// An element should occur more than n/2 times in an array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        arr.push_back(a);
    }
    
    // Moorie Voting Algo

    // Step 1: Finding the candidate element
    int me = arr[0], count = 1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            count--;
            if(count == 0){
                me = arr[i];
                count++;
            }
        }
    }
    cout<<me;

    // Step 2: Verify the candidate element as Majority Element
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == me){
            cnt++;
        }
        if(cnt>=n/2){
            cout<<"YES";
            break;
        }
    }
    return 0;
}