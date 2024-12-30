#include <bits/stdc++.h>
using namespace std;

// reverese an array using recursion

void swapArray(int arr[], int start, int end) {
    // Base case: If start index is greater than or equal to end index, return
    if (start >= end) {
        
        return;
    }
    // Swap the elements
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // Recursive call for the remaining array
    swapArray(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    swapArray(arr, 0, n - 1);

    cout << "Swapped array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}