#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<string> grid(N);

        for (int i = 0; i < N; i++) {
            cin >> grid[i];
        }

        int cnt = 0;
        pair<int, int> center;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (grid[i][j] == '#') {
                    cnt++;
                }
            }
        }

        int mid = (cnt + 1) / 2;
        cnt = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (grid[i][j] == '#') {
                    cnt++;
                }
                if (cnt == mid) {
                    center = {i + 1, j + 1};
                    break;
                }
            }
            if (cnt == mid) break;
        }

        cout << center.first << " " << center.second << endl;
    }

    return 0;
}
