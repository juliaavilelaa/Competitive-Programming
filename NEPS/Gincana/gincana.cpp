#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int vis[1002];

void dfs(int no, int cont, vector<vector<int>> adj) {
    vis[no] = cont;

    for (auto x : adj[no]) {
        if (vis[x] == 0) {
            dfs(x, cont, adj);
        }
    }
}

int main() {
    int n, m, a, b, cont;

    cin >> n >> m;

    vector<vector<int>> adj(n+1);
    memset(vis, 0, sizeof(vis));

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cont = 1;
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            dfs(i, cont, adj);
            cont++;
        }
    }

    cout << cont-1 << endl;

    return 0;
}