#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    
    int sum = a + b;
    double avg = sum / 2.0;

    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg << '\n';

    return 0;
}