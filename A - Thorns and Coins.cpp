#include<bits/stdc++.h>
#define endl "\n"
#define all(x) x.begin(),x.end()
#define ll long long


using namespace std;

int max_coin(int n, const string &road) {
    int total_coin = 0;
    int p = 0;
    int t = n;
    int i = 0;

    while (i < n - 1) {
        if (road[i] == '*' && road[i + 1] == '*') {
            t = i;
            break;
        }
        i = i + 1;
    }

    return count(road.begin(), road.begin() + t, '@');
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        string road;
        cin >> road;

        cout << max_coin(n, road) << endl;
    }

    return 0;
}
