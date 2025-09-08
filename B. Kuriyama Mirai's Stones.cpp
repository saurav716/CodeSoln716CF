#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> v(n + 1), sorted_v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        sorted_v[i] = v[i];
    }

    sort(sorted_v.begin() + 1, sorted_v.end());

    // Build prefix sums
    vector<ll> prefixOriginal(n + 1, 0), prefixSorted(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefixOriginal[i] = prefixOriginal[i - 1] + v[i];
        prefixSorted[i] = prefixSorted[i - 1] + sorted_v[i];
    }

    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            cout << prefixOriginal[r] - prefixOriginal[l - 1] << "\n";
        } else {
            cout << prefixSorted[r] - prefixSorted[l - 1] << "\n";
        }
    }
    return 0;
}
