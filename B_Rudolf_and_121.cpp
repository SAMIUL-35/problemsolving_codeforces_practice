#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = 1; i < n - 1; i++) {
            if (v[i - 1] <= v[i + 1] && 2 * v[i - 1] <= v[i]) {
                v[i + 1] -= v[i - 1];
                v[i] -= 2 * v[i - 1];
                v[i - 1] = 0;
            }
        }

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (v[i] != 0) {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
