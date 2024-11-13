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
        vector<long long> m;
        for(int i = 0; i < n-1; i++) {
            long long maxi=max(values[i], values[i+1]);
            m.push_back(maxi);
        }
        sort(m.begin(),m.end());
        cout<<m[0]-1<<endl;   
    }
  return 0;
    
}
