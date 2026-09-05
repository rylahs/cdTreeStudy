#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    const int offset = 1000;
    const int max_size = 2002;

    vector<vector<int>> grid(max_size, vector<int>(max_size, 0));

    int x1, y1, x2, y2;

    if (!(cin >> x1 >> y1 >> x2 >> y2))
        return 0;
    
    x1 += offset; y1 += offset;
    x2 += offset; y2 += offset;

    for (int x = x1; x < x2; x++)
    {
        for (int y = y1; y < y2; y++)
        {
            grid[x][y] = 1;
        }
    }

    int x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;

    x3 += offset; y3 += offset;
    x4 += offset; y4 += offset;

    for (int x = x3; x < x4; x++)
    {
        for (int y = y3; y < y4; y++)
        {
            grid[x][y] = 2;
        }
    }

    int min_x = max_size, max_x = 0;
    int min_y = max_size, max_y = 0;
    bool has_debris = false;
    for (int x = 0; x < max_size; x++)
    {
        for (int y = 0; y < max_size; y++)
        {
            if (grid[x][y] == 1)
            {
                has_debris = true;
                min_x = min(min_x, x);
                min_y = min(min_y , y);
                max_x = max(max_x, x);
                max_y = max(max_y, y);
            }
        }
    }

    if (!has_debris)
    {
        cout << 0 << '\n';
    }
    else
    {
        int wid = max_x - min_x + 1;
        int hei = max_y - min_y + 1;

        cout << wid * hei << '\n';
    }

    return 0;
}