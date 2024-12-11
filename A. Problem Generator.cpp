#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // Number of problems in the bank and number of rounds
        string a;
        cin >> a;      // Difficulty levels of problems in the bank

        // Frequency map to count occurrences of each difficulty level in 'A' to 'G'
        map<char, int> freq;
        for (char c : a) {
            freq[c]++;
        }

        // Calculate how many problems of each difficulty are required
        int needed = 0;
        for (char level = 'A'; level <= 'G'; ++level) {
            int available = freq[level];
            int required = m; // Each round requires one problem of each level

            if (available < required) {
                needed += (required - available); // Add the deficit to 'needed'
            }
        }

        cout << needed << endl;
    }

    return 0;
}
