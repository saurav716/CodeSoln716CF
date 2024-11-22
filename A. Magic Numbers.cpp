#include <iostream>
#include <string>
using namespace std;

bool isMagicNumber(const string& s) {
    for (size_t i = 0; i < s.length();) {
        if (s.substr(i, 3) == "144") {
            i += 3; 
        } else if (s.substr(i, 2) == "14") {
            i += 2; 
        } else if (s.substr(i, 1) == "1") {
            i += 1;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string n;
    cin >> n;
    
    if (isMagicNumber(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
