#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
#include<cstring>
using namespace std;

typedef long long int64;
const int INF = 0x3f3f3f3f;

const int MAXN = 1010;
vector<int>adj[MAXN];
bool vis[MAXN];
int n, m;
int f[MAXN][2];
const int M = 2000;

void dfs(int u) {
    vis[u] = true;
    f[u][0] = 0;
    f[u][1] = M;
    for(int i = 0; i < adj[u].size(); ++i) {
        int v = adj[u][i];
        if(vis[v]) continue;
        dfs(v);
        f[u][0] += f[v][1] + 1;
        if (f[v][0] < f[v][1]) {
            f[u][1] += f[v][0] + 1;
        } else {
            f[u][1] += f[v][1];
        }
    }
}

int main(){

    int nCase;

    scanf("%d", &nCase);

    while(nCase--) {

        scanf("%d%d", &n, &m);

        for(int i = 0; i < n; ++i)
            adj[i].clear();

        for(int i = 0; i < m; ++i) {
            int u, v;
            scanf("%d%d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        memset(vis, 0, sizeof(vis));
        int ans = 0;
        for(int i = 0; i < n; ++i) if(!vis[i]){
            dfs(i);
            ans += min(f[i][0], f[i][1]);
        }
        printf("%d %d %d\n", ans/M, m-(ans%M), ans%M);
    }

    return 0;
}
