//https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, tem;
        cin >> n >> k >> tem;
        vector<long long> a(n); 
        long long avl_day = 0;
        long long ans = 0;
        for (long long i = 0; i < n; i++) {
            cin >> a[i]; 
            if (a[i] <= tem) avl_day++;
            else {
                if (avl_day >= k) {
                    ans += (avl_day - k + 1) * (avl_day - k + 2) / 2;
                }
                avl_day = 0; 
            }
        }

        if (avl_day >= k) {
            ans += (avl_day - k + 1) * (avl_day - k + 2) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
