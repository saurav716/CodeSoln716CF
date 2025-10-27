#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int remainder = n % 3;
        int need = (remainder == 0) ? 0 : (3 - remainder);
        cout << need << "\n";
    }
    return 0;
}
