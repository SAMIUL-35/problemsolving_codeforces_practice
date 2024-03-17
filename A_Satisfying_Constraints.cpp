
#include <bits/stdc++.h>
using namespace std;

int count_integer(int n, vector<pair<int, int>>& c) {
    int lower = INT_MIN;
    int uper = INT_MAX;
vector<int> not_qual(n);
    for (int i = 0; i < n; ++i) {
        int a = c[i].first;
        int x = c[i].second;

        if (a == 1) {
            lower = max(lower, x);
        }  if (a == 2) {
            uper = min(uper, x);
        } 
        if(a==3) {
            
            not_qual.push_back(x);
        }

        
        if (lower > uper) {
            return 0;
        }
    }
int cnt=0;
for(int c:not_qual)
{
    if(c<=uper && c>=lower) cnt++;
}

   
    int count = uper-lower +1-cnt;
 
    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i].first >> c[i].second;
        }

       
        int result = count_integer(n, c);
        cout << result << endl;
    }

    return 0;
}