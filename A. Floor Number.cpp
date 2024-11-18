#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int N,X;
        cin >> N>>X;
       if(N<=2){
        cout<<1<<endl;
        continue;
       }
       else{
        int ans=0;
        ans=(N-3+X)/X;
        cout<<ans+1<<endl;
       }
     
    }

    return 0;
}
