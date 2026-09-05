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

    vector<vector<bool>> visited(max_size, vector<bool>(max_size, false));

    for (int i = 0; i < n; i++)
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
                visited[x][y] = true;
            }
        }
    }

    int tot_area = 0;

    for (int x = 0; x < max_size; x++)
    {
        for (int y = 0; y < max_size; y++)
        {
            if (visited[x][y])
            {
                tot_area++;
            }
        }
    }

    cout << tot_area << '\n';

    return 0;
}