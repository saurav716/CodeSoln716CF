#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int steps = 0;

    while (m > n) {
        if (m % 2 == 1) {
            m++;        // reverse of subtract
        } else {
            m /= 2;     // reverse of multiply by 2
        }
        steps++;
    }

    steps += (n - m);
    cout << steps;
    return 0;
}
