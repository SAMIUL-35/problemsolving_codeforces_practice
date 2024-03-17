#include <bits/stdc++.h>
using namespace std;

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

        int cnt = 0;
        int cnt1 = 0;

        // Count the number of elements equal to the first element
        for (int i = 0; i < n; i++) {
            if (v[i] == v[0]) 
                cnt++;
            else 
                break;
        }

        // Count the number of elements equal to the last element
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] == v[n - 1]) 
                cnt1++;
            else 
                break;
        }

        if(v.size()==cnt || v.size()==cnt1)
        {
            cout<<"0"<<endl;
        }
        else {
            if(v[0]!=v[n-1])
        {
            if(cnt>cnt1)
            {
cout<<v.size()-cnt<<endl;
            }
            else if (cnt==cnt1)
            {
cout<<v.size()-cnt<<endl;
            }
            else {
cout<<v.size()-cnt1<<endl;
            }
        }
        else 
        {
cout<<v.size()-cnt-cnt1<<endl;
        }
    }

        }
    return 0;
}
