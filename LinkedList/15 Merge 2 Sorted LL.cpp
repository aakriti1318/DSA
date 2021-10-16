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

node *fun(node *a, node *b){
    if(a == NULL) return b; 
    if(b == NULL) return a;
    node *head = NULL, *tail = NULL;
    if(a->data < b->data){
        head = tail = a;
        a = a->next;
    }
    else{
        head = tail = b;
        b = b->next;
    }
    
    while(a and b){
        if(a->data<b->data){
            tail->next = a;
            a = a->next;
            tail = tail->next;
        }
        else{
            tail->next = b;
            b = b->next;
            tail = tail->next;
        }
    }
    if(a == NULL) tail->next = b;
    else tail->next = a;
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
    int n,m; cin>>n>>m;
    int num1, num2; cin>>num1;
    node *a, *temp1;
    a = temp1 = new node(num1);
    for(int i=1;i<n;i++){
        cin>>num1;
        temp1->next = new node(num1);
        temp1 = temp1->next;
    }
    cin>>num2;
    node *b, *temp2;
    b = temp2 = new node(num2);
    for(int i=1;i<m;i++){
        cin>>num2;
        temp2->next = new node(num2);
        temp2 = temp2->next;
    }
    display(a);
    display(b);
    a = fun(a,b);
    display(a);
    return 0;
}