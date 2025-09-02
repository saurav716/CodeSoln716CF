#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; long long l;
    if(!(cin >> n >> l)) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    long double edge_left = a.front() - 0.0L;
    long double edge_right = l - a.back();

    long double mid_gap = 0.0L;
    for (int i = 0; i + 1 < n; ++i)
        mid_gap = max(mid_gap, (long double)(a[i+1] - a[i]));

    long double ans = max({edge_left, edge_right, mid_gap / 2.0L});
    cout.setf(ios::fixed); 
    cout << setprecision(10) << (double)ans << "\n";
    return 0;
}
