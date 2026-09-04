#include <iostream>
using namespace std;

int cnt_w[200002];
int cnt_b[200002];
int cur_col[200002];

int main() {
    // Please write your code here.

    int n;
    cin >> n;

    int cur = 100000;
    while (n--)
    {
        int x;
        char cmd;
        cin >> x >> cmd;

        if (cmd == 'R')
        {
            while (x--)
            {
                if (cur_col[cur] != 3)
                {
                    cnt_b[cur]++;

                    if (cnt_b[cur] >= 2 && cnt_w[cur] >= 2)
                        cur_col[cur] = 3;
                    else
                        cur_col[cur] = 2;
                }

                if (x > 0) cur++;
            }
        }
        else // L
        {
            while (x--)
            {
                if (cur_col[cur] != 3)
                {
                    cnt_w[cur]++;

                    if (cnt_b[cur] >= 2 && cnt_w[cur] >= 2)
                        cur_col[cur] = 3;
                    
                    else
                        cur_col[cur] = 1;
                }

                if (x > 0) cur--;
            }
            
        }
    }

    int w = 0, b = 0, g = 0;

    for (int i = 0; i < 200002; i++)
    {
        if (cur_col[i] == 1) 
            w++;
        else if (cur_col[i] == 2)
            b++;
        else if (cur_col[i] == 3)
            g++;
    }

    cout << w << ' ' << b << ' ' << g << '\n';

    return 0;
}