// Problem A. Turn Into a Palindrome

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    char l;
    string s;
    cin >> n >> l >> s;
    int p1 = 0;
    int p2 = s.size() - 1;
    int acc = 0;
    while (p1 < p2) {
        if (s[p1] != s[p2]) {
            if (s[p1] != l && s[p2] != l) {
                acc += 2;
            } else {
                acc += 1;
            }
        }
        p1 += 1;
        p2 -= 1;
    }
    cout << acc << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}