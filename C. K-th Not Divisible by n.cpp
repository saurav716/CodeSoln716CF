#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long q = (k - 1) / (n - 1);
        long long r = (k - 1) % (n - 1);
        long long ans = q * n + (r + 1);
        cout << ans << "\n";
    }
}
