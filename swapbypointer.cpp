#include <iostream>
using namespace std;


void SwapByPointers(int *x, int *y) 
{
    int temp = *x;  
    *x = *y;       
    *y = temp;      
}

int main() {
    int a, b;
    cout << "ENTER TWO NUMBERS: ";
    cin >> a >> b;

    cout << "BEFORE SWAP: a = " << a << ", b = " << b << endl;

    SwapByPointers(&a, &b);  

    cout << "AFTER SWAP: a = " << a << ", b = " << b << endl;

    return 0;
}
