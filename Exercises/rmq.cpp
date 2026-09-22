// Range Minimum Query in C++

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, lenA, lenB;
    short acc, min;
    cin >> n;

    vector<int> a(n);
    vector<int> mins;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Preprocessing
    lenA = a.size();
    lenB = sqrt(lenA);
    acc = 0;
    minimum = a[0];

    // Obtaining minimums of each sqrt(lenA) long block, filling the vector named "mins"
    for (int i = 1; i < n; i++) {
        byte iBlock = i / lenB;
        if (quotient != acc) {
            mins.push_back(minimum);
            minimum = 0;
            acc += 1;
        } else {
            if (a[i] < minimum) {
                min = a[i];
            }
        }
    }

    int q;
    cin >> q;

    for (int k = 0; k < q; k++) {
        byte l, r;
        cin >> l >> r;

        // Solving Query
        int lBlock = l / lenB;
        int rBlock = r / lenB;
        byte min = a[l];

        if (lBlock == rBlock) {
            for (int i = lBlock+1; i < rBlock+1; i++) {
                if (a[i] < min) {
                    min = a[i]
                }
            }
            print(min)
        } else {
            // limits, quite sure I have to make an aux function, and find l1, l2, r1 and r2 in order to catch left and right properly
        }
    }
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