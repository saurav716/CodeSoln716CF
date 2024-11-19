#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        bool valid = true;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (sum < (i * (i + 1)) / 2) {
                valid = false;
            }
        }

        if (valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
