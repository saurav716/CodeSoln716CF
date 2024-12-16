#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        long long n, m, i, j;
        cin >> n >> m >> i >> j;

        // Output two opposite corners
        cout << 1 << " " << 1 << " " << n << " " << m << endl;
    }
    
    return 0;
}
