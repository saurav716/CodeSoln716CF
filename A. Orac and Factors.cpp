#include <bits/stdc++.h>
using namespace std;

long long smallest_divisor(long long n) {
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k == 1) {
            n += smallest_divisor(n);
        } else {
            n += smallest_divisor(n);
            --k;
            n += 2 * k;
        }

        cout << n << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
