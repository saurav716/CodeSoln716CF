#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];
    sort(prices.begin(), prices.end());

    int q; cin >> q;
    while (q--) {
        int m; cin >> m;
        // upper_bound returns iterator to first element > m
        int ans = upper_bound(prices.begin(), prices.end(), m) - prices.begin();
        cout << ans << "\n";
    }
}
