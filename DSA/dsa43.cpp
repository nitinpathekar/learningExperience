#include <iostream>
#include<string>
using namespace std;

int main(){
    string str="nitin pathekar";
    for(char ch: str){
        cout<<ch<<endl;
    }

    //member function

    cout<<str.length()<<endl;
    cout<<str.at(3)<<endl;
    cout<<str.substr(4,3)<<endl;
    cout<<str.find("th");
    return 0;
}