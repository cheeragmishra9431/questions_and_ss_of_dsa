#include<iostream>
using namespace std;
#include<unordered_set>
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int x){
        key=x;
        left=NULL;
        right=NULL;
    }
};
int arr[100000];
void inorder(Node* root, int* i){
    inorder(root->left,i);
    if(root==NULL){
        return;
    }
    arr[*i]=root->key;
    *i=*i +1;
    inorder(root->right,i);
}
void function_name( int arr[], int n){
    int x[n];
    int y[n];
    unordered_set<int> s;
    x[0]=0;
    s.insert(arr[0]);
    for(int i=1; i<n ; i++){
        if(s.find(arr[i])!=s.end()){
            if(s.size()!=0){
                
            }
            else{
                x[i]=0;
            }
        }
        
    }
}
int main(){
//code;
return 0;
}