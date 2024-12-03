#include <bits/stdc++.h>
using namespace std;

string decodeWord(int n, string s) {
    deque<char> decoded;

    // Iterate through the encoded string in reverse
    for (int i = n - 1; i >= 0; --i) {
        int median_pos = decoded.size() / 2; // Find the median position
        auto it = decoded.begin() + median_pos;
        decoded.insert(it, s[i]); // Insert the character at the median position
    }

    // Convert the deque to a string
    return string(decoded.begin(), decoded.end());
}

int main() {
    int n;
    string s;

    // Input
    cin >> n >> s;

    // Decode and output the result
    cout << decodeWord(n, s) << endl;

    return 0;
}
