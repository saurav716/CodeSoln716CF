#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    FAST_IO
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> ar(n);
        for (ll i = 0; i < n; i++) {
            cin >> ar[i];
        }

        ll total_operations = 0;
        bool possible = true;

        for (ll i = n - 2; i >= 0; i--) {
            while (ar[i] >= ar[i + 1]) {
                if (ar[i] == 0) {
                    possible = false;
                    break;
                }
                ar[i] /= 2;
                total_operations++;
            }
            if (!possible) break;
        }

        if (possible) {
            cout << total_operations << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
