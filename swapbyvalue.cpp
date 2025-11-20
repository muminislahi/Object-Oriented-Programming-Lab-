#include <iostream> 
using namespace std;

void swapthevalue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapthevalue: a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10;
    int y = 20;
    cout << "Before swapthevalue : x = " << x << ", y = " << y << endl;

    swapthevalue(x, y);
    cout << "After swapthevalue : x = " << x << ", y = " << y << endl;
    return 0;
}