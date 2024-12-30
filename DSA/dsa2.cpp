#include <bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0){
        return ;
    }
    cout<<"Nitin \n";
    n--;
    print(n);
}

int main(){

    cout<<"call Print :";
    print(5);
    return 0;
}