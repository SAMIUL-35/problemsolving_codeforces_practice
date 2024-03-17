#include <iostream>
#include <string>
using namespace std;

string generateString(int n) {
    if (n == 1) return "NO";
    string result = "YES\n";
 
    result += 'A';
    for (int i = 1; i < n; ++i) {
     
        result += (i % 2) ? 'A' : 'B';
    }
    
    result += 'A';
    return result;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << generateString(n) << endl;
    }
    return 0;
}
