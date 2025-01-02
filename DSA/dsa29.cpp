#include <iostream>
using namespace std;

void reverse(int *arr, int n)
{
    int temp=0;
    for (int i = 0; i < n / 2; i++)
    {
        
            temp = arr[i];
            arr[i] = arr[n - i];
            arr[n - i] = temp;
        
    }
}

int main()
{

    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[1]);
    int temp=0;
    for (int i = 0; i<=(n/2); i++)
    {
        
            temp = arr[i];
            arr[i] = arr[n - i-1];
            arr[n - i-1] = temp;
        
    }
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}