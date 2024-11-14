#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N ;
        cin >> N ;
        int ar[N];
        for (int i=0; i<N; i++) {
            cin >> ar[i];
        }
        int max=0,cnt=0;
         for (int i=0; i<N; i++) {
            if (ar[i]==0) {
                cnt++;
            }
            else {
                if(max<cnt){
                    max=cnt;
                }
                cnt=0;
            }   
        }
        if(max>cnt){
        cout << max << endl;
        }
        else{
            cout << cnt << endl;
        }
    } 
    return 0;
}
