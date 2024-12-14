#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define lli long long int
using namespace std;

void solve() {
    lli a, b, c, d;
    cin >> a >> b >> c >> d; 
    if((b - a) % (c + d) != 0){
      cout << -1 << endl;
    } else {
      cout << (b - a) / (c + d) << endl;
    }

}

signed main() {
    fast();
    lli t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
