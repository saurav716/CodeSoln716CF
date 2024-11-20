#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> even, odd;

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x % 2 == 0) {
                even.push_back(x);
            } else {
                odd.push_back(x);
            }
        }

        
        ll z = even.size();
        ll ans = 0;
        for(ll i = 1; i <= z; i++) {
            ans+=n-i;
        }

        // Calculate pairs among odd numbers
        for (int i = 0; i < odd.size(); i++) {
            for (int j = i + 1; j < odd.size(); j++) {
                if (__gcd(odd[i], 2 * odd[j]) > 1) {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
