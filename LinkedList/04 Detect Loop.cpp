// Floyd’s Cycle-Finding Algorithm

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
bool fun(node *root){
    node *slow = root;
    node *fast = root;
    while(slow!=NULL and fast!=NULL and fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
            break;
        }
    }
    return false;
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
    head->next->next->next->next = head;
    // int k; cin>>k;
    if(fun(head)) cout<<"YES";
    else cout<<"NO";
    // display(head);
    return 0;
}