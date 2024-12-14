#include <iostream>
#include <vector>
using namespace std;

bool isLiked(int num) {
    // A number is liked if it's not divisible by 3 and doesn't end with 3
    return (num % 3 != 0) && (num % 10 != 3);
}

void solve() {
    int t;
    cin >> t;

    vector<int> likedNumbers;
    int current = 1;

    while (likedNumbers.size() < 1000) {
        if (isLiked(current)) {
            likedNumbers.push_back(current);
        }
        current++;
    }

    while (t--) {
        int k;
        cin >> k;
        cout << likedNumbers[k - 1] << endl;
    }
}

int main() {
    solve();
    return 0;
}
