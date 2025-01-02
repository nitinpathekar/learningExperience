#include<iostream>
using namespace std;

int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key;
    int s = 0, e = sizeof(arr)/sizeof(arr[0]) - 1; 

    cout << "Enter the key to search: ";
    cin >> key;

    while (s <= e) {
        int mid = s + (e - s) / 2; 
        if (key == arr[mid]) {
            cout << "Key found at index: " << mid;
            return 0;
        } else if (key < arr[mid]) {
            e = mid - 1; 
        } else {
            s = mid + 1; 
        }
    }

    cout << "Key not found.";
    return 0;
}
