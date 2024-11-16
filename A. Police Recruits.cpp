#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, n; 
    cin >> n;
   int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int cnt=0;
    int cnt1=0;
    for (int i = 0; i <n; i++)
    {
        if(ar[i]<0 && cnt1>0){
            cnt1--;
        }
       else if(ar[i]<0){
            cnt+=abs(ar[i]);
        }
       
       else{
            cnt1+=ar[i];
        }
    }
    cout << cnt << endl;

    return 0;
}
