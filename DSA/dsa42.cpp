#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    strcpy(str, "hello");
    cout << str;
    char str1[100];
    strcpy(str1, str);
    cout << endl
         << str1 << endl;

    // concatenate the 2 string
    char strcat1[100] = "hello";
    char strcat2[100] = " Nitin";
    strcat(strcat1, strcat2);
    cout << strcat1;
    
    //compare the string
    char str5[100]="hello";
    char str4[100]="lello";
   cout<< strcmp(str4,str5);
    return 0;

}