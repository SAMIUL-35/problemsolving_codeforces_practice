#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        ll x, y;
        cin >> x >> y;
      bool ok=true;
        for (ll i = 0; i < k; ++i) {
            ll xx, yy;
            cin >> xx >> yy;
            if ((x + y) % 2 == (xx + yy) % 2) {
                ok=false;
            }
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}