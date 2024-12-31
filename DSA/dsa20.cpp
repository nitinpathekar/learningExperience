#include<iostream>
using namespace std;

int product(int num1,int num2){
    return num1*num2;
}
char oddEven(int num){
    if(num%2==0){
        return 'E';

    }
    else{
        return 'O';
    }

}

int main(){
    int num1,num2,num;
    cin>>num1>>num2;
   product(num1,num2);
   cout<<product(num1,num2);
    cin>>num;
    oddEven(num);
cout<<oddEven(num);
    return 0;
}