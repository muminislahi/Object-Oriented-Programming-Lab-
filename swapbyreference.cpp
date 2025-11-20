#include <iostream>
using namespace std;

void SwapByReference(int &x, int &y) 
{
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "Before Swap:";
    cout << "a = " << a << ", b = " << b << endl;

    SwapByReference(a, b); 

    cout << "After Swap:";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
