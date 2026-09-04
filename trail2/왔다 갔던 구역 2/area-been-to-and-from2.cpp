#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int OFFSET = 10000;
const int MAX_R = 20005;

int diff[MAX_R];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cur = 0;

    for (int i = 0; i < n; i++) {
        int dist;
        char dir;
        cin >> dist >> dir;

        int nxt;
        if (dir == 'R') {
            nxt = cur + dist;
            diff[cur + OFFSET] += 1;
            diff[nxt + OFFSET] -= 1;
        } else {
            nxt = cur - dist;
            diff[nxt + OFFSET] += 1;
            diff[cur + OFFSET] -= 1;
        }
        cur = nxt;
    }

    int ans = 0;
    int current_overlap = 0;

    for (int i = 0; i < MAX_R - 1; i++) {
        current_overlap += diff[i];
        if (current_overlap >= 2) {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}