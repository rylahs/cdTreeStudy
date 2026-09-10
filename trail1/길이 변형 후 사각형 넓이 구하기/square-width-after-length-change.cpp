#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int wid, hei;
    cin >> wid >> hei;

    wid += 8;
    hei *= 3;

    cout << wid << '\n' << hei << '\n' << wid * hei << '\n';
    return 0;
}