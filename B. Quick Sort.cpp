#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    FAST_IO
    ll t;
    cin >> t; 
    while (t--) {
        ll n, k;
        cin >> n >> k; 
        vector<int> ar(n);
        for (ll i = 0; i < n; i++) {
            cin >> ar[i];
        }

        if (is_sorted(ar.begin(), ar.end())) {
            cout << 0 << endl;
            continue;
        }

        vector<int> b = ar;
        sort(b.begin(), b.end());

        ll cnt = 0, j = 0;
        for (ll i = 0; i < n; i++) {
            if (ar[i] == b[j]) {
                cnt++;
                j++;
            }
        }

        ll bug = n - cnt;

        ll ans = (bug + k - 1) / k; 
        cout << ans << endl;
    }
    return 0;
}
