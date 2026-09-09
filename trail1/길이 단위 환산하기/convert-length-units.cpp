#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double ft_to_cm = 30.48;

    cout << fixed;
    cout.precision(1);

    double n;
    cin >> n;

    cout << n * ft_to_cm << '\n';

    return 0;
}