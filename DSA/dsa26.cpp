#include<iostream>
#include <cmath>
using namespace std;

int convertD(int num){
    float dec=0;
    for(int i=0;true;i++){
        if (num==0) return dec;
        else{
            dec+=((num % 10)* pow(2,i));
            num/=10;
        }
        

    }
}

int main(){
    int num;
    cin>>num;
   cout<< convertD(num);
  
    return 0;
}