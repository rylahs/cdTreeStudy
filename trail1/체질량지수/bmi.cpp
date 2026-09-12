#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int hei, wei;
    cin >> hei >> wei;

    int bmi = 10000 * wei / (hei * hei);

    cout << bmi << '\n';
    if (bmi >= 25)
        cout << "Obesity\n";
    return 0;
}