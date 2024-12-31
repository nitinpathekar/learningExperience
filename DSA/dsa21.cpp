#include<iostream>
using namespace std;


int factorial(int num){
    int fact=1;
    for(num;num>=1;num--){
        fact=fact*num;

    }


    return fact;
}





// int factorial(int num){
//     // cout<<num;
//     if(num==1) return 1;
//     return num*factorial(num-1);
// }

int main(){
    int num;
    cin>>num;
    cout<<factorial(num);
    return 0;
}