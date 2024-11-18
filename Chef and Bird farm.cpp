#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, z; 
        cin >> x >> y >> z;

        bool chicken_possible = (z % x == 0); 
        bool duck_possible = (z % y == 0);  

        if (chicken_possible && duck_possible) {
            cout << "ANY" << endl; 
        } else if (chicken_possible) {
            cout << "CHICKEN" << endl; 
        } else if (duck_possible) {
            cout << "DUCK" << endl; 
        } else {
            cout << "NONE" << endl; 
        }
    }

    return 0;
}
