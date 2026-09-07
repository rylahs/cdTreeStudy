#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Please write your code here.

    double a = 5.26;
    double b = 8.27;

    cout << fixed;
    cout << setprecision(3);

    cout << a * b << '\n';

    return 0;
}