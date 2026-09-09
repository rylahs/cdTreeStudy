#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    
    double a;
    cin >> a;

    cout << fixed;
    cout.precision(2);

    a += 1.5;

    cout << a << '\n';
    
    return 0;
}