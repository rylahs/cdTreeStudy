#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Please write your code here.
    int n;
    if (!(cin >> n)) 
        return 0;

    const int offset = 100;
    const int max_size = 202;

    vector<vector<int>> grid(max_size, vector<int>(max_size, 0));

    for (int i = 0; i < n; i++) 
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += offset;
        y1 += offset;
        x2 += offset;
        y2 += offset;

        int color = (i % 2 == 0) ? 1 : 2;

        for (int x = x1; x < x2; x++) 
        {
            for (int y = y1; y < y2; y++) 
            {
                grid[x][y] = color;
            }
        }
    }

    int blue_area = 0;
    for (int x = 0; x < max_size; x++) 
    {
        for (int y = 0; y < max_size; y++) 
        {
            if (grid[x][y] == 2)
            {
                blue_area++;
            }
        }
    }

    cout << blue_area << "\n";
    return 0;
}