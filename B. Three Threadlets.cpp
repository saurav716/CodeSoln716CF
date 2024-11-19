#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c; 
        bool pass = true;
        ll m= min({a, b, c}); 
        if (a % m!= 0 || b % m!= 0 || c % m!= 0) {
            pass = false; 
        }
       int cnt=0;
       while(a!=m){
        if(cnt>3 || a%m!=0){
           pass= false;
           break;
        }
        a-=m;
        cnt++;
       }
        while(b!=m){
        if(cnt>3 || b % m!=0){
           pass=false;
           break;
        }
        b-=m;
        cnt++;
       }
        while(c!=m){
        if(cnt>3 || c % m!=0){
           pass=false;
           break;
        }
        c-=m;
        cnt++;
       }

        if (cnt<=3 && pass) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
