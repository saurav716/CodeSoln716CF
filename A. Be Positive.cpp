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
        ll n, cnt=0, cnt2=0;
        cin>>n;
        ll ar[n];
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
            if(ar[i]==0){
                cnt++;
            }
            else if(ar[i]==-1){
                     cnt2++;
            }
        }
        if(cnt2%2==0){
           cout<<cnt<<endl;
        }
        else{
            cout<<cnt+2<<endl;
        }
    }
    return 0;
}