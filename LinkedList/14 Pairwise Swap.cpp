#include<bits/stdc++.h>
using namespace std;
struct node{
    int data; 
    struct node *next;
    node(int k){
        this->data = k;
        next = NULL;
    }
};

node *fun(node *head){
    node *curr = head->next->next;
    node *prev = head;
    head = head->next;
    head->next = prev;
    while(curr and curr->next){
        prev->next = curr->next;
        prev = curr;
        node *next = curr->next->next;
        curr->next->next = curr;
        curr = next;
    }
    prev->next = curr;
    return head;
}

void display(node *root){
    while(root->next!=NULL){
        cout<<root->data<<"->";
        root = root->next;
    }
    cout<<root->data<<endl;
}
int main(){
    int n; cin>>n;
    int num; cin>>num;
    node *root, *temp;
    root = temp = new node(num);
    for(int i=1;i<n;i++){
        cin>>num;
        temp->next = new node(num);
        temp = temp->next;
    }
    display(root);
    root = fun(root);
    display(root);
    return 0;
}