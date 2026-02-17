#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    long long total = 0;
    for(int i = 0; i < n; i++)
        total += a[i];

    if(total % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    long long target = total / 3;
    long long prefix = 0;
    long long countTarget = 0;
    long long ways = 0;

    for(int i = 0; i < n - 1; i++) {
        prefix += a[i];

        if(prefix == 2 * target)
            ways += countTarget;

        if(prefix == target)
            countTarget++;
    }

    cout << ways << endl;
}
