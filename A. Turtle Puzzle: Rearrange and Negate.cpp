#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    int po_sum = 0;
    int ne_sum = 0;
    cin >> n;

    vector<int> ele(n);
    for (int i = 0; i < n; ++i) {
      cin >> ele[i];
      if (ele[i] > 0) {
        po_sum += ele[i];
      } else {
        ne_sum += ele[i];
      }
    }
    cout << po_sum + abs(ne_sum) << endl;
  }

  return 0;
}
