#include <iostream>
using namespace std;

class Number {
public:
    int value;

    Number(int v) : value(v) {}

    Number operator + (Number n) {
        return Number(value + n.value);
    }
};

int main() {
    Number a(5), b(7);
    Number c = a + b;

    cout << c.value;
    return 0;
}
