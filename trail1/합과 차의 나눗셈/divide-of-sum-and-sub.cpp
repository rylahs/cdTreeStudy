#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int sum = a + b;
    int sub = a - b;

    double res = (double)sum / sub;
    cout << fixed;
    cout.precision(2);

    cout << res << '\n';
    return 0;
}