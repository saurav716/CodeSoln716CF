#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

ll i, j, k, l, m, n;
ll mx = 0, mn = INT_MAX;
ll sum = 0, mul = 1, cnt = 0, pass = 0;
ll alph[26];

const ll mod=1e9+7;

int main() {
    FAST_IO
    ll t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str1, str2;
        cin >> str1 >> str2;
        int one=0,one2=0,cnt=0;
        for(int i=0;i<n;i++){
            if(str1[i]=='1') one++;
            if(str2[i]=='1') one2++;
            if(str1[i]!=str2[i] && str2[i]=='1') cnt++;
    }
    int ans = cnt;
    if(one2<one) ans +=(one-one2);
    cout << ans << "\n";
    }
    return 0;
}