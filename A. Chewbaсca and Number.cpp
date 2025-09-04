#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < (int)x.size(); i++) {
        int d = x[i] - '0';
        if (i == 0 && d == 9) {
            // first digit is 9 → keep it as 9
            continue;
        }
        if (9 - d < d) {
            // invert if it gives a smaller digit
            x[i] = (char)('0' + (9 - d));
        }
    }

    cout << x << "\n";
    return 0;
}
