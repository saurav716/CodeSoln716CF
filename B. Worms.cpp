#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> prefix(n);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        sum += a;
        prefix[i] = sum;
    }

    int m;
    cin >> m;
    while (m--) {
        long long q;
        cin >> q;
        // binary search
        int pile = lower_bound(prefix.begin(), prefix.end(), q) - prefix.begin();
        cout << pile + 1 << "\n";
    }
    return 0;
}
