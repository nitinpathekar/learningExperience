#include <iostream>
using namespace std;
void swap(int arr[], int j)
{
    int temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
}
    
    

void sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {5,4,6,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);

    return 0;
}