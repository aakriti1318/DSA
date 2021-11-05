#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
    node(int key){
        data = key;
        left = right = NULL;
    }
};

node *inserttree(vector<int> v, node *root, int n, int idx){
    if(idx < n){
        node *temp = new node(v[idx]);
        root = temp;
        root->left = inserttree(v,root->left,n,2*idx+1);
        root->right = inserttree(v, root->right, n, 2*idx+2);
    }
    return root;
}

void fun(node *root, int k){
    if(root == NULL) return;
    if(k == 0) cout<<root->data<<" ";
    else{
        fun(root->left, k-1);
        fun(root->right, k-1);
    }
}

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    node *root = inserttree(v,root,n,0);
    int k; cin>>k;
    fun(root,k-1);

    return 0;
}