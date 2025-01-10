#include <iostream>
#include <string>
using namespace std;
void isAnagram(string str1,string str)
{

    for (int i = 0; i < str1.length() - 1; i++)
    {
        for (int j = 0; j < str1.length() - 1; j++)
        {
            if (str1.at(j) > str1.at(j + 1))
            {
                int temp = str1.at(j);
                str1.at(j) = str1.at(j + 1);
                str1.at(j + 1) = temp;
            }
        }
    }
    cout<<str1<<endl;
    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = 0; j < str.length() - 1; j++)
        {
            if (str.at(j) > str.at(j + 1))
            {
                int temp = str.at(j);
                str.at(j) = str.at(j + 1);
                str.at(j + 1) = temp;
            }
        }
    }
    cout<<str<<endl;
    if(str1==str){
        cout<<1;
    }
}

int main()
{
    string str1 = "cagsfe";
    string str2 = "sfgace";
    if (str1.length() !=  str2.length())
    {
        cout << false;
    }
    else
    {
        isAnagram(str1,str2);
    }

    return 0;
}