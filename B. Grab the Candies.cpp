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
        int m=0, b=0;
       for (int i =0; i < N; i++) {
         if(ar[i]%2==0){
            m += ar[i];
         }
         else{
            b += ar[i];
         }
        
       }
        if(m>b){
        cout <<"YES" << endl;
        }
        else{
            cout << "NO"<< endl;
        }
    } 
    return 0;
}
