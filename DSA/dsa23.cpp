#include <iostream>
using namespace std;

int fact(int num){
    if(num==1) return 1;
    return fact(num-1)*num;

}

int main(){
    int r,n ;
    cin>>n>>r;
    int ans=(fact(n)/(fact(r)*fact(n-r)));
    cout<<ans;
    

    return 0;
}