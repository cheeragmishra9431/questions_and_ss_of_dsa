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
void stock(int arr[], int n){
    if(n==1){
        return ;
    }
    int i=0;
    while(i<n-1){
        if(i<n-1 &&  arr[i]>=arr[i+1] ){
            i++;
        }
        if(i==n-1){
            return ;
        }
        int buy= i++;
        while (i<n && arr[i]>=arr[i-1] )
        {
            /* code */
            i++;
        }
        int sell =i-1;
        cout<< buy<< " "<<sell;
        
    }
}
void flips(int arr[] ,int n){
    int k=arr[0];
    for( int i=1; i<n ; i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=k){
                cout<< "from" << i << 'to' ;

            }
            else{
                cout<< i-1<<endl;
            }
        }
        if(arr[n-1]!=k){
            cout<<n-1<<endl;
        }
    }
}
int main(){
//code;
// int * arr;
// int n;
// arr= new int[n];
// int as[]={1,2,3,4,5,6,7};
// gf(as,7);
// second_largest(as, 7);
// int x= sizeof(arr)/ sizeof(arr[0]) ;
int price[] = { 100, 180, 260, 310, 40, 535, 695 };
int f[]={0,1,0,1,0,1,0,0,0,0};
flips(f, 11);
    int n = sizeof(price) / sizeof(price[0]);
 
    // Function call
    // stock(price, n);
// x is the size of the array;
return 0;
}