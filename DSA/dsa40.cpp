#include<iostream>
using namespace std;

void toupper(char ch){
    cout<<(char)(ch-32);
}
int main(){
    char ch='t';
    toupper(ch);
    return 0;
}