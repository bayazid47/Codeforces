#include <iostream>
#include <string>

using namespace std;

string make_palindrome(string s) {
    int n = s.length();

    for (int i = 0; i < n / 2; ++i) {
        int j = n - 1 - i;

        if (s[i] == '?' && s[j] == '?') {
            s[i] = s[j] = 'a';
        } else if (s[i] == '?' || s[j] == '?') {
            s[i] = s[j] = (s[i] == '?') ? s[j] : s[i];
        } else if (s[i] != s[j]) {
            return "-1";
        }
    }

    for (char &ch : s) {
        if (ch == '?') {
            ch = 'a';
        }
    }

    return s;
}

int main() {
    string s;
    cin >> s;

    string result = make_palindrome(s);
    cout << result << endl;

    return 0;
}
