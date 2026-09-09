#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    cin >> s;

    int pos = s.find(':');

    int h = stoi(s.substr(0, pos));
    int m = stoi(s.substr(pos + 1));

    h += 1;

    cout << h << ":" << m << '\n';
    return 0;
}