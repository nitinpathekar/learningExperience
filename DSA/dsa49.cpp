#include <iostream>
using namespace std;

class Student
{
    int id;
    float cgpa;

public:
    string name;
    void setID(int id)
    {
        this->id = id;
    }
    int getID()
    {
        return id;
    }
    void setCgpa(float cgpa)
    {
        this->cgpa = cgpa;
    }
    float getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    Student nitin;
    nitin.setID(1);
    cout << nitin.getID() << " ";
    nitin.name = "Nitin Pathekar";
    nitin.setCgpa(7.58);
    cout << nitin.name << endl;
    cout << nitin.getCgpa() << endl;
    return 0;
}