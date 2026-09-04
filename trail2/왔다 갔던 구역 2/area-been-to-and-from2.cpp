#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<int> v(20002);

    int mark = 10000;

    while(n--)
    {
        int x;
        char cmd;
        cin >> x >> cmd;

        if (cmd == 'L')
        {
            while (x--)
            {
                v[mark]++;
                mark--;
            }
        }

        else
        {
            while (x--)
            {
                v[mark]++;
                mark++;
            }
        }
    }
    int ans = 0;
    for (auto& e : v)
    {
        if (e >= 2)
            ans++;
    }

    cout << ans << '\n';

    
    return 0;
}