#include<iostream>
using namespace std;

void swap(int* ptr1,int *ptr)
{
    int temp=*ptr1;
    *ptr1=*ptr;
    *ptr=temp;
}
int main(){
    int arr[]={78,54445,4,5,8,5,4564,4,5,654,4,454,654,544,1,5,574,55,8};
    int n=sizeof(arr)/sizeof(arr[0]),st;
    for(int i=0;i<n-1;i++){
         st=i;
        for(int j=i;j<n;j++){
            if(arr[st]>arr[j]) st=j;
        }
        swap(arr[i],arr[st]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}