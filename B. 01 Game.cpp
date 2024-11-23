#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

ll i, j, k, l, m, n;
ll mx = 0, mn = INT_MAX;
ll sum = 0, mul = 1, cnt = 0, pass = 0;
ll alph[26];

const ll mod=1e9+7;

int main() {
    FAST_IO
    ll t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int count_0 = 0, count_1 = 0;

        for (char c : s) {
            if (c == '0') count_0++;
            else if (c == '1') count_1++;
        }

        int pairs = min(count_0, count_1);

        if (pairs % 2 == 1) {
            cout << "DA" << endl; 
        } else {
            cout << "NET" << endl; 
        }
    
    }
    return 0;
}