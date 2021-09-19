#include<iostream>
#include<stack>
using namespace std;
struct ts{
    int * arr;
    int top1;
    int top2;
    int cap;
    ts(int n){
        arr= new int[n];
        top1=-1;
        top2=n;
        cap=n;
    }

};
void ps(int arr[], int n){
    stack<int> s;
    s.push(0);
    cout<<1;
    for(int i=1; i<n;i++ ){
        if( s.empty()==false && arr[i]<arr[s.top()]){
            cout<<i-s.top();
            s.push(i);
            continue;
        }
        else{
            while(arr[i]>arr[s.top()] && s.empty()==false){
                s.pop();
            }
            if(s.empty()==true){
                cout<<i+1;
                s.push(i);
            }
            else{
                cout<<i-s.top();
                s.push(i);
            }
        }
    }
}
void stp(int arr[], int n){
    stack<int> s;
    s.push(0);
    for(int i=1; i<n ;i++){
        while(s.empty()==false && arr[i]>=arr[s.top()]){
            s.pop();
        }
        int span;
        if(s.empty()==true){
            span=i+1;
        }
        else{
            span=i-s.top();

        }
        cout<<span;
        s.push(span);
        
    }
}
int main(){
//code;
int arr[]={10,4,5,90,120,80};
// ps(arr,6);
stp(arr,6);
return 0;
}