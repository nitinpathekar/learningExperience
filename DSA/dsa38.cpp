#include <iostream>

using namespace std;

int main()
{
    int mat[4][4] = {
        {1, 2, 3, 4},
        {4, 5, 6, 7},
        {8, 9, 10, 11},
        {12, 13, 14, 15}};
        int sum=0;
    for(int i=0;i<4;i++){
        if(i==4-i-1){

        sum+=(mat[i][4-i-1]);
        }
        sum+=(mat[i][i]+mat[i][4-i-1]);
    }
    cout<<sum;
    return 0;
}