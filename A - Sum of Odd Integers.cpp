#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define end "\n"
#define lli long long int
using namespace std;

void solve(){
    lli a, b;
    cin >> a >> b;
    if (b * b > a || (a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
}

signed main(){
    fast();
    int t;
    cin >> t;
    while(t--)
        solve();
}
