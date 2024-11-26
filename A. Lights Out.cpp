#include <iostream>
using namespace std;

int main() {
    int presses[3][3], result[3][3] = {1};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> presses[i][j];
            result[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int toggles = presses[i][j];
            if (toggles % 2 != 0) {
                result[i][j] ^= 1;
                if (i > 0) result[i-1][j] ^= 1;
                if (i < 2) result[i+1][j] ^= 1;
                if (j > 0) result[i][j-1] ^= 1;
                if (j < 2) result[i][j+1] ^= 1;
            }
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << result[i][j];
        }
        cout << endl;
    }

    return 0;
}
