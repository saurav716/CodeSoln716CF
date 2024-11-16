#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, n; 
    cin >> n;
   int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int cnt=0;
    for (int i = 0; i <n-1; i++)
    {
        cnt += ar[n-1]-ar[i];
    }
    cout << cnt << endl;

    return 0;
}
