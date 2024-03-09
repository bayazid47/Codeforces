#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int h, m;
        cin >> h >> m;
        cout << setw(4) << 1440 - h * 60 - m << '\n';
    }

    return 0;
}
