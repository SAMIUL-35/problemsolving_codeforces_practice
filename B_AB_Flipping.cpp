#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;
        map<int,int> f;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'A' && s[i + 1] == 'B' && f[i]==0)
            {
                swap(s[i], s[i + 1]);
                flag++;
                f[i]++;
                i = (i - 2); 
            }
        }

        cout << flag << endl;
    }

    return 0;
}
