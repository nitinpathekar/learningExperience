#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    int *mike;
    Car(int id , string name){
        this->name=name;
         (*mike)=40;
        cout<<"id is :"<<id<< " , name is : "<<name<<endl;
    }
    Car(Car &original){
        cout<<"Copying name.."<<endl;
        name= original.name;
    }
};
int main(){
    Car c1(1, "maruti");

    //copy constructor
     Car c2(c1);
     cout<<c2.name<<endl;

    return 0;
}