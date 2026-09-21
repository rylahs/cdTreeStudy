#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int ondo;
    cin >> ondo;

    if (ondo < 0)
        cout << "ice\n";
    else if (ondo < 100)
        cout << "water\n";
    else
        cout << "vapor\n";
        
    return 0;
}