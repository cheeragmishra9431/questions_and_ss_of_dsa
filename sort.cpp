#include<iostream>
using namespace std;
void ss(int arr[], int n){
    for( int i=0; i<n ;i++){
        int min=i;
        for( int j=i+1;j<n ;j++ ){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min], arr[i]);
    }
    }
int main(){
    int r[]={3,2,5,4,6,7};
    int n=6;
    ss(r,n);
    for( int i=0; i<n ; i++){
        cout<<r[i];
    }
//code;
return 0;
}