#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N ;
        cin >> N ;
     string str;
     cin >> str;
     set<string>st;
     for(int i = 0; i < N-1; i++) {
          string t;
          t.push_back(str[i]);
          t.push_back(str[i+1]);
          st.insert(t);
     }
     cout << st.size() <<endl;
    } 
    return 0;
}
