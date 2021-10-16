#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int k){
        this->data = k;
        next = NULL;
    }
};

void display(node *head){
    while(head->next!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<head->data;
}

node *fun(node *head){
    unordered_set<int> s;
    node *temp = head;
    node *prev = NULL;
    while(temp!=NULL){
        if(s.find(temp->data) != s.end()){
            prev->next = temp->next;
            delete(temp);
        }
        else{
            s.insert(temp->data);
            prev = temp;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    int n; cin>>n;
    int arr[n];
    cin>>arr[0];
    node *temp, *head;
    head = temp = new node(arr[0]);
    for(int i=1;i<n;i++){
        cin>>arr[i];
        temp->next = new node(arr[i]);
        temp = temp->next;
    }
    head = fun(head);
    display(head);
}