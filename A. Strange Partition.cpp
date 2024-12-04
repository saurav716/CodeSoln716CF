#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void calculate_beauty(int t, vector<pair<int, int>>& test_cases, vector<vector<int>>& arrays) {
    for (int i = 0; i < t; ++i) {
        int n = test_cases[i].first, x = test_cases[i].second;
        vector<int>& a = arrays[i];

        long long total_sum = 0, max_beauty = 0;
        for (int num : a) {
            total_sum += num;
            max_beauty += (num + x - 1) / x;
        }

        long long min_beauty = (total_sum + x - 1) / x;
        cout << min_beauty << " " << max_beauty << endl;
    }
}

int main() {
    int t;
    cin >> t;

    vector<pair<int, int>> test_cases;
    vector<vector<int>> arrays;

    for (int i = 0; i < t; ++i) {
        int n, x;
        cin >> n >> x;
        test_cases.emplace_back(n, x);

        vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        arrays.push_back(a);
    }

    calculate_beauty(t, test_cases, arrays);

    return 0;
}
