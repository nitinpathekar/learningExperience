#include <iostream>
using namespace std;

void arrange(int arr[], int j, int i ,int n)
{
    int start = arr[j];
    for (int k = j; k >= i; k--)
    {
        arr[k] = arr[k - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr+i << endl;
    }
}

void sort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                arrange(arr, j, i,n);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {4, 3, 6, 83, 7, 37, 26, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    return 0;
}