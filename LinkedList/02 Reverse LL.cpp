#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};

void display(node *root){
    while(root!=NULL){
        cout<<root->data<<"->";
        root = root->next;
    }
}
node *reverse(node *root){
    node *prev = NULL, *next = NULL;
    node *curr = root;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    root = prev;
    return root;
}
int main(){
    int n; cin>>n;
    int num; cin>>num;
    node *head, *tail;
    head = tail = new node(num);
    for(int i=0;i<n-1;i++){
        cin>>num;
        tail->next = new node(num);
        tail = tail->next;
    }
    
    head = reverse(head);
    display(head);
    return 0;
}