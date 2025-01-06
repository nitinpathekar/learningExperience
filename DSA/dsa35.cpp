#include<iostream>
using namespace std;

//bubble sort

void swap(int arr[],int j){
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
}

void sort(int arr[],int n){
    for (int i=n-1;i>0;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]) swap(arr,j);
        }
    }
}
int main(){
    int arr[]={4,8,2,5,7,1,5,9,3,5,5,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}