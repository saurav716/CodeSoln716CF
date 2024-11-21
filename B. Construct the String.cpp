#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        string pattern = "";
        for (int i = 0; i < b; i++) {
            pattern += (char)('a' + i);
        }

        string result = "";
        while (result.length() < n) {
            result += pattern;
        }
        result = result.substr(0, n);
        cout << result << endl;
    }

    return 0;
}
