 #include<iostream>
 using namespace std;
 struct SinglyLinkedListNode {
      int data;
      SinglyLinkedListNode* next;
  };
 
 

SinglyLinkedListNode* reverse(SinglyLinkedListNode* lalist) {
    if(lalist==NULL && lalist->next==NULL){
        return lalist;
    }
    SinglyLinkedListNode* prev=NULL;
    SinglyLinkedListNode* nxt;
    SinglyLinkedListNode* curr= lalist;
    while(curr !=NULL){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
    
