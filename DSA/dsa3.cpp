#include <bits/stdc++.h>
using namespace std;

void printNum(int i,int n){
    if(i==n){
        return;
    }
    cout<<i+1;
    i++;
    printNum(i,n);

}

int main()
{
    int n;
       cin >> n;

    cout << "Print number linearly to " <<n << " :\n ";
 
    printNum(0, n);
    return 0;
}