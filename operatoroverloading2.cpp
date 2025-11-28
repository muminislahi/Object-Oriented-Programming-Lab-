#include <iostream>
using namespace std;

class Counter 
{
public: int value;
        Counter(int v) : value(v) {}

       void operator++() {
        value++;
       }
};

int main() {
    Counter c(5);
    ++c;   
    cout << c.value;   
}
