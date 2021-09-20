#include<iostream>
using namespace std;
void gf (int * Arr, int n){
    for(int i=0; i<n ;i++){
        cout<<Arr[i]; 
    }
}
void second_largest(int arr[], int n){
    int hig=0;
    int high2=0;
    for(int i=0; i<n ; i++){
        if(arr[i]> hig){
            high2=hig;
            hig= arr[i];
        }
        if(arr[i]< hig && arr[i]> high2){
            high2=arr[i];
        }

    }
    cout<< hig<< high2;
}
void move(int arr[], int n){
    int count=0;
    for(int i=0;i <n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main(){
//code;
int * arr;
int n;
arr= new int[n];
int as[]={1,2,3,4,5,6,7};
gf(as,7);
second_largest(as, 7);
int x= sizeof(arr)/ sizeof(arr[0]) ;
// x is the size of the array;
return 0;
}