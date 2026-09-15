#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << a * b << '\n';
    else
        cout << b / a << '\n';
    return 0;
}