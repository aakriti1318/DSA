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
node *fun(node *root){
    node *slow = root;
    node *fast = root;
    while(slow!=NULL and fast!=NULL and fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            break;
    }
    if(slow!=fast) return NULL;
    slow = root;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
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
    head->next->next->next->next = head->next;
    // int k; cin>>k;
    head = fun(head);
    display(head);
    return 0;
}