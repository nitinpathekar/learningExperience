#include <iostream>
using namespace std;

bool checkIthBit(int num, int i)
{
    return (num & (1 << i)) != 0;
}

void setIthBit(int *num, int i)
{
    *num = (*num | (1 << i));
}
void clearIthBit(int *num, int i)
{
    *num = (*num & ~(1 << i));
}

int main()
{
    int num = 5; // Example number
    cin >> num;
    char ch, cha;
    int i = 2; // Example bit position
    cout << "The " << i << "th bit of " << num << " is: " << checkIthBit(num, i) << endl;
    cout << "Do you want to change 2nd bit of num " << num << " ? Yes(y) or No(n) ?" << endl;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        setIthBit(&num, i);
        cout << num;
    }
    cout << "Do you want to clear the value? Yes(Y) NO(N)? ";
    cin >> cha;
    if (cha == 'y' || cha == 'Y')
        clearIthBit(&num, i);

    cout << num;
    return 0;
}
