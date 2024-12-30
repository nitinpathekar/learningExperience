#include <bits/stdc++.h>
using namespace std;

//factorial of n?
int fact(int n){
    if(n<=1) return n;
    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);

    return 0;
}