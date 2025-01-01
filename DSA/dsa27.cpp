#include<iostream>
#include<cmath>
using namespace std;

int binary(int num){
    int rem;
    int bin=0;
    int pow=1;
    while(num>0){
        rem=num%2;
        bin=bin +pow*rem;
        num/=2;

        pow*=10;
    }
    return bin;

}

int main(){
    int num;
    cin>>num;
    cout<<binary(num);
    return 0;
}