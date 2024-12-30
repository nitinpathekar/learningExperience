#include <bits/stdc++.h>
using namespace std;

// reverse an array?


int main()
{
    char arr[] = {'n','i','t','i','n'};
    int temp;
    int count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n / 2; i++)
    {
        {

            temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n - i-1] = temp;
        }
      
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     return 0;
// }