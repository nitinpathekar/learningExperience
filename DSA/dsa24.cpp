#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}


int main(){

    int num;
    cin>>num;
    for(int i=3;i<=num;i++){
        

    if(isPrime(i)){
        cout<<i<<endl;
    }
    }
    return 0;
}