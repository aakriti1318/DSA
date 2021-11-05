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

void fun(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        node *curr = q.front();
        q.pop();
        if(curr == NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout<<curr->data<<" ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
}

void fun2(node *root){
    queue<node*> q;
    q.push(root);
    while(q.size()>0){
        int count = q.size();
        for(int i=0;i<count;i++){
            node *curr = q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        cout<<endl;
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
    fun(root);
    cout<<endl<<endl;
    fun2(root);
    return 0;
}