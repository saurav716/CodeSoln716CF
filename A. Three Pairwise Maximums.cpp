#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int m = max({x, y, z});
        
        if ((x == m && y == m) || 
            (x == m && z == m) || 
            (y == m && z == m)) {
            cout << "YES" << endl;
            if (x == m && y == m) {
                cout << m << " " << z << " " << z << endl;
            } else if (x == m && z == m) {
                cout << m << " " << y << " " << y << endl;
            } else {
                cout << m << " " << x << " " << x << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
