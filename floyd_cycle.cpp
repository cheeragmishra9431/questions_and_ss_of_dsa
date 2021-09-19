#include<iostream>
using namespace std;
struct Node
{
    /* dat
    a */
    int data;
    Node* next;
    Node(int x){
        next=NULL;
        data=x;
    }
};
Node* insert(Node* tail,int x){
    Node* temp= new Node(x);
    tail->next=temp;
    tail=temp;
    return tail;

}
void floyd(Node* root){
    Node* slow=root;
    Node* fast=root;
    while(fast->next!=NULL && fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }
    }
    if(slow!=fast){
        return;
    }
    fast=root;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    cout<<fast->data;
}
int main(){
    // Node* head=new Node(1);
    // head->next= new Node(2);
    // head->next->next=new Node(3);
    // head->next->next->next= new Node(4);
    // head->next->next->next->next= head;
    // floyd(head);
    cout<<"enter the number of node"<<endl;
    int n;
    cin>>n;
    Node* root=NULL;
    Node* tail;
    for(int i=0; i<n; i++){
        cout<<"enter the node";
        int temp;
        cin>>temp;
        if(root==NULL){
            root=new Node(temp);
            tail=root;
            continue;
        }
        tail=insert(tail,temp);
        
    }
    Node* curr=root;
    while(curr!=NULL){
        cout<<curr->data<<endl;
        curr=curr->next;
    }

//code;
return 0;
}