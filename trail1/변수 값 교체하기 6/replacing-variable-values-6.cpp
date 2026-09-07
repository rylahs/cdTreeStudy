#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a = 2;
    int b = 5;

    a ^= b;
    b ^= a;
    a ^= b;

    cout << a << '\n';
    cout << b << '\n';
    
    return 0;
}