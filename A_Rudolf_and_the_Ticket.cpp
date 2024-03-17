#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n];
        int b[m];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + m);

        int cnt = 0;
        int j = m - 1; 
        for (int i = 0; i < n; i++) {
            while (j >= 0 && a[i] + b[j] > k) {
                j--; 
            }
            cnt += j + 1; 
        }
        cout << cnt << endl;
    }
    return 0;
}
