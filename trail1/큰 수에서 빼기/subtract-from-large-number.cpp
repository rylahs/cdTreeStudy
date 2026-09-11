#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int res = a - b;

    if (res < 0)
        res *= -1;

    cout << res << '\n';
    return 0;
}