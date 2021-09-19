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
//pairwise swap nodes
Node* sap(Node* root){
    Node* curr=root->next;
    Node* prev=root;
    Node* prev1=root;
    while(curr!=NULL && curr->next!=NULL){
        Node* temp=prev->next->next;
        curr->next=prev;
        prev->next=temp->next;
        prev=temp;
        curr=prev->next;
    }
    return prev1;
}
int main(){
//code;
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

return 0;
}