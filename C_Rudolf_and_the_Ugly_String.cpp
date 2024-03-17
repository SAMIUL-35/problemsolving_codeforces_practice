#include <bits/stdc++.h>

using namespace std;


int count(const string& s) {
    string s1[] = {"pie", "map"};
    int remove = 0;
    int i = 0;
    while (i < s.length()) {
        bool found = false;
        for ( string s2 : s1) {
            if (s.substr(i, s2.length()) == s2) {
                remove++;
                found = true;
                break;
            }
        }
        if (found) {
            i += 3; 
        } else {
            i++;
        }
    }
    return remove;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << count(s) << endl;
    }
    return 0;
}
