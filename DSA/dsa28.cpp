#include<iostream>
using namespace std;

int search(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]) return i;
        
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<search(arr,n,7);
    return 0;
}