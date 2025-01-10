#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int *ptr= new int[size];
    for(int i=1;i<=size;i++){
        ptr[i]=i;
        cout<<ptr[i]<<endl;
    }

    return 0;
}