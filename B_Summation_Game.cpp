#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Alice removes at most k smallest elements
        sort(a.begin(), a.end());
        for (int i = 0; i < min(k, x); ++i) {
            if (a[i] < 0) {
                a[i] = -a[i];
            }
        }

        // Bob multiplies at most x elements by -1
        for (int i = n - 1; i >= max(n - k, 0); --i) {
            if (a[i] < 0) {
                a[i] = -a[i];
            }
        }

        // Calculate the sum of the modified array
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}
