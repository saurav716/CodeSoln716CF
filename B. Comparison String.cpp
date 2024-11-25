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

		cin>>n;
		string str;
		cin >> str;
		ll len = str.length();
		int cnt=2;
		int m=2;
		for(int i=0; i<len-1; i++) {
			if(str[i]==str[i+1]){
				cnt++;
				if(cnt>m){
					m=cnt;
				}
			}
			else{
                cnt=2;
            }
		}
       cout<<m<<endl;
	}
	return 0;
}