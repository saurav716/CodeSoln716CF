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
        ll s;
        ll total_spent = 0;
        cin>>s;
         while (s >= 10) {
            total_spent += s - (s % 10); // Add largest multiple of 10
            s = (s / 10) + (s % 10);    // Cashback + remaining burles
        }

        total_spent += s; // Add remaining burles
        cout << total_spent << '\n';
    }
    return 0;
}
/*#include <iostream>
#include <vector>
using namespace std;

void maximumBurles(int t, vector<long long>& test_cases) {
    for (long long s : test_cases) {
        long long total_spent = 0;

       
    }
}

int main() {
    int t;
    cin >> t;
    vector<long long> test_cases(t);

    for (int i = 0; i < t; i++) {
        cin >> test_cases[i];
    }

    maximumBurles(t, test_cases);

    return 0;
}
*/