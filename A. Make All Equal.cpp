#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> values(n);
        for (int i = 0; i < n; i++) {
            cin >> values[i];
        }
    map<int, int> count_map;

    // Count occurrences
    for (int value : values) {
        count_map[value]++;
    }

    int counts=0;
    for (const auto& pair : count_map) {
       if(pair.second>counts){
          counts=pair.second;
       }
    }
    cout<<n-counts<<endl;
}
    return 0;
}
