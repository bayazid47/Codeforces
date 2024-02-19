#include<bits/stdc++.h>
#define endl "\n"
#define all(x) x.begin(),x.end()
#define ll long long
#include <vector>


using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> arr(n, vector<int>(n));
        vector<string> li(n);

        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            for (int j = 0; j < n; ++j) {
                arr[i][j] = (s[j] == '1' ? 1 : 0);
            }
        }

        bool tri = false;
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < n - 1; ++j) {
                if (arr[i][j] == 1 && arr[i][j - 1] == 0 && arr[i][j + 1] == 0) {
                    tri = true;
                    break;
                }
            }
            if (tri) {
                break;
            }
        }

        if (tri) {
            cout << "TRIANGLE" << endl;
        } else {
            cout << "SQUARE" << endl;
        }
    }

    return 0;
}
