#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    for (int i = 0; i < n; ++i) {
        long long mini, maxi;

        // Compute mini
        if (i == 0) {
            // First city
            mini = abs(x[1] - x[0]);
        } else if (i == n - 1) {
            // Last city
            mini = abs(x[n - 1] - x[n - 2]);
        } else {
            // Any other city
            mini = min(abs(x[i] - x[i - 1]), abs(x[i + 1] - x[i]));
        }

        // Compute maxi
        maxi = max(abs(x[i] - x[0]), abs(x[i] - x[n - 1]));

        // Output the result
        cout << mini << " " << maxi << endl;
    }

    return 0;
}
