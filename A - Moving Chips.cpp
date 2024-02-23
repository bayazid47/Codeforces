#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int>c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        vector<int>position;
        for (int i = 0; i < n;i++) {
            if (c[i] == 1) {
                position.push_back(i);
            }
        }

        int min_op = 0;
        for (int i = 1; i < position.size(); i++) {
            int d = position[i] - position[i - 1] - 1;
            min_op += d;
        }

        cout << min_op << endl;
    }

    return 0;
}
