#include <bits/stdc++.h>

using namespace std;

bool complete(vector<int>& v) {
    sort(v.begin(), v.end());

    int n = v.size();

   
    for (int i = 0; i < n; i++) {
        if (v[i] >n/2) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (complete(v)) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
