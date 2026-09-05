#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    
    if (!(cin >> n))
        return 0;
    
    const int offset = 100000;
    const int max_size = 200002;

    vector<int> tiles(max_size, 0);
    int cur = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        char dir;
        cin >> x >> dir;

        if (dir == 'L')
        {
            for (int pos = cur; pos >= cur - x + 1; pos--)
            {
                tiles[pos + offset] = 1;
            }
            cur = cur - x + 1;
        }

        else
        {
            for (int pos = cur; pos <= cur + x - 1; pos++)
            {
                tiles[pos + offset] = 2;
            }

            cur = cur + x - 1;
        }
    }

    int white_cnt = 0;
    int black_cnt = 0;

    for (int color : tiles)
    {
        if (color == 1)
            white_cnt++;
        else if (color == 2)
            black_cnt++;
    }

    cout << white_cnt << ' ' << black_cnt << '\n';

    return 0;
}