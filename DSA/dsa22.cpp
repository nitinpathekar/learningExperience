#include<iostream>
using namespace std;
bool isprime(int num){
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    for(int i=2;i<num;i++){
        if (num%i==0) return false;
        
    }
   return true;
}
int main(){
    int num;
    cin>>num;
    cout << (isprime(num) ? "true" : "false");
    return 0;
}