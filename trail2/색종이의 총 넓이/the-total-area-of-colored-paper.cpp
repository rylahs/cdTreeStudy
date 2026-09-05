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
    const int paper_size = 8;

    vector<vector<bool>> visited(max_size, vector<bool>(max_size, false));

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        x += offset;
        y += offset;

        for (int dx = 0; dx < paper_size; dx++)
        {
            for (int dy = 0; dy < paper_size; dy++)
            {
                visited[x + dx][y + dy] = true;
            }
        }
    }

    int tot = 0;

    for (int i = 0; i < max_size; i++)
    {
        for (int j = 0; j < max_size; j++)
        {
            if (visited[i][j])
                tot++;
        }
    }

    cout << tot << '\n';
    return 0;
}