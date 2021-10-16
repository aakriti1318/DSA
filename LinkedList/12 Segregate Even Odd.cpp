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

void fun(node *head){
    node *es = NULL, *ee = NULL, *os = NULL, *oe = NULL;
    node *curr = head;
    while(curr!=NULL){
        int x = curr->data;
        if(x%2 == 0){
            if(es == NULL){
                es = curr;
                ee = es;
            }
            else{
                ee->next = curr;
                ee = ee->next;
            }
        }
        else{
            if(os == NULL){
                os = curr;
                oe = os;
            }
            else{
                oe->next = curr;
                oe = oe->next;
            }
        }
        curr = curr->next;
    }
    if(os == NULL or es == NULL) return;
    ee->next = os;
    oe->next = NULL;
    head = es;
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
    fun(head);
    display(head);
}