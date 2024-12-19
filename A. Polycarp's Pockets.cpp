#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Count frequencies of each value
    map<int, int> frequency;
    for (int value : a) {
        frequency[value]++;
    }

    // Find the maximum frequency
    int maxFrequency = 0;
    for (auto [value, count] : frequency) {
        maxFrequency = max(maxFrequency, count);
    }

    // Output the result
    cout << maxFrequency << endl;

    return 0;
}
