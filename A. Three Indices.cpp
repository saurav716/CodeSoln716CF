#include <bits/stdc++.h>
using namespace std;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        bool found = false;
        for (int j = 1; j < n - 1; j++) {
            if (p[j] > p[j - 1] && p[j] > p[j + 1]) {
                cout << "YES" << endl;
                cout << j << " " << j + 1 << " " << j + 2 << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
