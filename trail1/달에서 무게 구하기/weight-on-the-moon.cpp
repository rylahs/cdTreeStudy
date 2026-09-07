#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.

    int wei = 13;
    double moon_g = 0.165;

    cout << fixed;

    cout << setprecision(6);
    cout << wei << " * " << moon_g << " = " << wei * moon_g << '\n';
    return 0;
}