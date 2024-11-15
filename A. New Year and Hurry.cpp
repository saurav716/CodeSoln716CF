#include <bits/stdc++.h>
using namespace std;

int main() {
    int T=1;
   // cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N>>K ;
        int ar[N];
        int time=K,cnt=0;
        for (int i=1; i<=N; i++) {
            if(time+i*5<=240){
             time += i*5;
             cnt=i;
            }
            else{
                break;
            }
        }
        cout<<cnt<<endl;
        
    } 
    return 0;
}
