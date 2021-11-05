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

bool fun(node *root){
    if(root == NULL) return true;
    if(root->left == NULL and root->right == NULL) return true;

    int sum = 0;
    if(root->left) sum += root->left->data;
    if(root->right) sum += root->right->data;

    return sum == root->data and fun(root->left) and fun(root->right);
}

int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.push_back(a);
    }
    node *root = inserttree(v,root,n,0);
    if(fun(root)) cout<<"YES";
    else cout<<"NO";
    return 0;
}