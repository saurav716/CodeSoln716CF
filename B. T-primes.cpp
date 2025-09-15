#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    const int LIMIT = 1000000; // sqrt(1e12)
    vector<bool> isPrime(LIMIT + 1, true);
    isPrime[0] = isPrime[1] = false;

    // Sieve of Eratosthenes
    for (int i = 2; i * i <= LIMIT; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= LIMIT; j += i) {
                isPrime[j] = false;
            }
        }
    }

    unordered_set<long long> tPrimes;
    for (int i = 2; i <= LIMIT; i++) {
        if (isPrime[i]) {
            tPrimes.insert(1LL * i * i);
        }
    }

    for (long long x : arr) {
        if (tPrimes.count(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
