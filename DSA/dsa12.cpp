#include<iostream>
using namespace std;

int main(){
    char ch='A';
    int n;
    cin>>n;
    char cha;
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i;j++){
            
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
    return 0;

}