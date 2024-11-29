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
        ll n,k;
        cin >> n;
        cin >> k;
       
        if(n<k){
            cout<<k-n<<endl;
        }
        else if ((n-k)%2==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}