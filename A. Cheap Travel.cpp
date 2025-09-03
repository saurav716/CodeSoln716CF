#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int cost1 = n * a;
    
    int cost2 = (n / m) * b + min((n % m) * a, b);
    
    cout << min(cost1, cost2) << "\n";
    return 0;
}
