#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
vector<pair<int, int>> a[N];
bool visit[N];
int colorUsed[N]; // Array to store the color used to reach each station

int minSubwayLines(int src, int des) {
    queue<int> q;
    q.push(src);
    visit[src] = true;
    
    while (!q.empty()) {
        int par = q.front();
        q.pop();
        
        if (par == des)
            return colorUsed[par]; // Return the color used to reach the destination
        
        for (auto ch : a[par]) {
            int child = ch.first;
            int color = ch.second;
            
            if (!visit[child]) {
                visit[child] = true;
                q.push(child);
                colorUsed[child] = color; // Store the color used to reach this station
            }
        }
    }
    return -1; // If destination is not reachable
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; ++i) {
            a[i].clear();
            visit[i] = false;
            colorUsed[i] = -1; // Initialize colorUsed array to -1
        }
        
        for (int i = 0; i < m; ++i) {
            int u, v, c;
            cin >> u >> v >> c;
            a[u].push_back({v, c});
            a[v].push_back({u, c});
        }
        
        int src, des;
        cin >> src >> des;
        
        int minColor = minSubwayLines(src, des);
        cout << minColor << endl;
    }
    return 0;
}
