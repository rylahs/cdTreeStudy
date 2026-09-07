#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 1, b = 2, c = 3;
    int sum = a + b + c;
    a = sum;
    b = sum;
    c = sum;

    cout << a << ' ' << b << ' ' << c << '\n';
    return 0;
}