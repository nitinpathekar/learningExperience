#include<iostream>
#include<cstring> 
using namespace std;

    void convert(char ch[],int n){
        for(int i=0;i<n;i++){
            if(ch[i] <'A' && ch[i] >='Z'){
                continue;
            }
            ch[i]+=32;
        }

    };
int main(){

    char ch[]="Apple";
    convert(ch, strlen(ch));
    cout<<ch;
    return 0;
} 