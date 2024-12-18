#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    // Create a set of characters in "codeforces"
    unordered_set<char> codeforces{'c', 'o', 'd', 'e', 'f', 'r', 'c', 's'};

    while (t--) {
        char c;
        cin >> c; // Input the character

        // Check if the character exists in the set
        if (codeforces.count(c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
