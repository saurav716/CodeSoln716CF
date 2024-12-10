#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> strengths(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> strengths[i];
        }
        
        // Sort the strengths
        sort(strengths.begin(), strengths.end());
        
        // Find the minimum difference between adjacent athletes
        int min_difference = INT_MAX;
        for (int i = 1; i < n; ++i) {
            min_difference = min(min_difference, strengths[i] - strengths[i - 1]);
        }
        
        cout << min_difference << endl;
    }
    
    return 0;
}
