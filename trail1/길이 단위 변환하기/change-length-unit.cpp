#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Please write your code here.

    double ft_to_cm = 30.48;
    int mile_to_cm = 160934;

    double a = 9.2;
    double b = 1.3;

    cout << fixed;
    cout << setprecision(1);

    cout << a << "ft = " << a * ft_to_cm << "cm\n";
    cout << b << "mi = " << b * mile_to_cm << "cm\n";


    return 0;
}