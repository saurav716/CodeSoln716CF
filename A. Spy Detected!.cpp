#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[105];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int common;

        // Determine the common value
        if (a[0] == a[1]) {
            common = a[0];
        } else {
            if (a[0] == a[2]) {
                common = a[0];
            } else {
                common = a[1];
            }
        }

        // Find the different element
        for (int i = 0; i < n; i++) {
            if (a[i] != common) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
