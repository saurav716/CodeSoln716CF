#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        int min1 = n * (a - b);
        int max1 = n * (a + b);
        int min2 = c - d;
        int max2 = c + d;

        if (max1 < min2 || min1 > max2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
