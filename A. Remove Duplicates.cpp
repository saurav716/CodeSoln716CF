#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n; // Number of elements in the array
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_set<int> seen;  // To track already included elements
    vector<int> result;      // To store the resulting array

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) {
        if (seen.find(a[i]) == seen.end()) {
            seen.insert(a[i]);
            result.push_back(a[i]);
        }
    }

    // Reverse the result to maintain the correct order
    reverse(result.begin(), result.end());

    // Output the results
    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
