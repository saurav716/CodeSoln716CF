#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int strength_j = a[j - 1];
        int count_stronger = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] <= strength_j) {
                count_stronger++;
            }
        }

        if (count_stronger == n || 1 < k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
