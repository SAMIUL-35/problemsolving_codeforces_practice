#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            string digits = to_string(a[i]);
            a.erase(a.begin() + i);
            for (char d : digits) 
            {
                a.insert(a.begin() + i, d - '0');
                i++;    
                  }
            i--; 
        }
    }
    if(is_sorted(a.begin(), a.end())) cout<<"YES"<<endl;
else cout<<"NO"<<endl;}
    return 0;
}
