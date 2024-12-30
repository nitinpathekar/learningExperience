#include <bits/stdc++.h>
using namespace std;
// int sum(int n, int s){
//     if(n<=0){
//         return s;
//     }
//     sum(n-1,s+n);
// }

int sum(){
    if(n<=0) return n;
    return n+sum(n-1);
}

int main(){

    int n;
    cout<<"Input the value to which you want sum: \n";
    cin>>n;
    cout<<sum(n);
    return 0;
}