#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        a[i] = a[i] % x;
        b[i]  = a[i] % y;
        
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
