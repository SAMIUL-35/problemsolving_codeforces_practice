#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n);
        vector<int> b(m);

        // Input elements of array a
        for (int i = 0; i < n; i++)
            cin >> a[i];

        // Input elements of array b
        for (int i = 0; i < m; i++)
            cin >> b[i];

        // Count occurrences of each integer in both arrays
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
            freq[a[i]]++;
        for (int i = 0; i < m; i++)
            freq[b[i]]++;

        // Check if there are enough occurrences of each integer from 1 to k
        bool possible = true;
        for (int i = 1; i <= k; i++) {
            if (freq[i] < 2) {
                possible = false;
                break;
            }
        }

        // Output the result
        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
