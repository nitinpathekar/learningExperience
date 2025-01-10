#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    // Test cases
    int n;
    cin>>n;
    cout << isPowerOfTwo(n) << endl;  

    return 0;
}
