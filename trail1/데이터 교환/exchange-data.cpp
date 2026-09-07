#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 5, b = 6, c = 7;
    int tmp = a;

    a = c;
    c = b;
    b = tmp;

    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    
    

    return 0;
}