#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n;
    string binary_string;

    cin >> n;
    cin >> binary_string;

    int count_0 = 0, count_1 = 0;
    for (char ch : binary_string) {
        if (ch == '0') {
            count_0++;
        } else if (ch == '1') {
            count_1++;
        }
    }

    int result = abs(count_0 - count_1);

    cout << result << endl;

    return 0;
}
