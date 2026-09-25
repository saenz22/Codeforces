// Fashionable Array in c++

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    vector<int> aux(n, 0);

    for (int i=0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());
    int number = arr[0];
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (number == arr[i]) {
            aux[index] += 1;
        } else {
            number = arr[i];
            index += 1;
            aux[index] += 1;
        }
    }
    
    //arr.erase(unique(arr.begin(), arr.end()), arr.end());

    cout << arr.size() << " " << aux.size();
    
    for (int i = 0; i < n; i ++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    // for (int i = 0; i < aux.size(); i ++) {
    //     cout << aux[i] << " ";
    // }


    // while (arr.size() > 0) {
    //     int mode = aux[0];
    //     int reps;

    //     for (int i = 0; i < arr.size(); i++) {
    //         reps = aux[i];
    //         if (reps <= mode) {
    //             for (int j = 0; j < reps; j++) {
    //                 //cout << arr[i] << " ";
    //             }
    //             aux.erase(aux.begin() + i);
    //             arr.erase(arr.begin() + i);
    //             i -= 1;
    //         } else {
    //             for (int j = 0; j < mode; j++) {
    //                 //cout << arr[i] << " ";
    //             }
    //             aux[i] -= mode;
    //             reps = aux[i];
    //         }
    //     }
    // }
    
    // cout << "\n";

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //int t;
    //cin >> t;

    cout << "RESULTADOS" << "\n";

    //while (t--) {
        solve();
    //}

    return 0;
}