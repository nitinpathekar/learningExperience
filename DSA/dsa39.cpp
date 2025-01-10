#include <iostream>
using namespace std;

void spiral(int mat[][4], int n, int m)
{
    int scol = 0, ecol = n - 1, srow = 0, erow = m - 1;
     while(srow<=erow&&scol<=ecol){

    for (int i = scol; i <= ecol; i++)
    {
        cout << mat[srow][i];
    }
    cout << endl;
    srow++;
    for (int i = srow; i <= erow; i++)
    {

        cout << mat[i][ecol];
    }
    cout << endl;
    ecol--;
    for (int i = ecol; i >=scol; i--)
    {
        cout << mat[erow][i];
    }
    cout << endl;
    erow--;
    for(int i=erow;i>=srow;i--){
        cout<<mat[i][scol];
    }
    scol++;
    cout<<endl;
}
}
int main()
{

    int mat[4][4] = {
        {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
   int n=4,m=4;
        spiral(mat, n, m);
    return 0;
}