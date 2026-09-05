#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.

    const int offset = 1000;
    const int max_size = 2002;

    vector<vector<int>> grid(max_size, vector<int>(max_size, 0));

    for (int i = 0; i < 2; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += offset;
        y1 += offset;
        x2 += offset;
        y2 += offset;

        for (int x = x1; x < x2; x++)
        {
            for (int y = y1; y < y2; y++)
            {
                grid[x][y] = 1;
            }
        }
    }

    int mx1, my1, mx2, my2;
    cin >> mx1 >> my1 >> mx2 >> my2;

    mx1 += offset;
    my1 += offset;
    mx2 += offset;
    my2 += offset;

    for (int x = mx1; x < mx2; x++)
    {
        for (int y = my1; y < my2; y++)
        {
            grid[x][y] = 2;
        }
    }

    int res = 0;

    for (int x = 0; x < max_size; x++)
    {
        for (int y = 0; y < max_size; y++)
        {
            if (grid[x][y] == 1)
                res++;
        }
    }

    cout << res << '\n';
    return 0;
}