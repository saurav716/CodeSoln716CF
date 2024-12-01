#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> ans(n);
    iota(ans.begin(), ans.end(), 1);  // Efficiently fill the vector with 1 to n

    reverse(ans.begin(), ans.end()); // Reverse the entire vector
    reverse(ans.end() - m, ans.end()); // Reverse the last `m` elements

    for (int val : ans)
        cout << val << " ";
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
