#include <iostream>
using namespace std;

#define ll long long

int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        ll n, x, y, z = 0;
        cin >> x >> n; // Input two integers x and n

        y = n % 4; // Find the remainder of n when divided by 4

        if (y == 1)
            z = -n; // Case when remainder is 1
        else if (y == 2)
            z = 1; // Case when remainder is 2
        else if (y == 3)
            z = n + 1; // Case when remainder is 3
        // No need for else for y == 0 since z = 0 by default

        if (x & 1) // Check if x is odd
            cout << x - z << endl; // Print x - z
        else // If x is even
            cout << x + z << endl; // Print x + z
    }

    return 0;
}
