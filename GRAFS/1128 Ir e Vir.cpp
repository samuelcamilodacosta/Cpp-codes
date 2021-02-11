#include <bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define cl(x, v) memset((x), (v), sizeof(x))

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> plll;
typedef vector<int> vi;
typedef vector<vi> vii;

const int N = 1e5+5;

vi adj[N], adjt[N];
int ord[N], ordn, scc[N], sccn, sz[N], vis[N];
set <int> adjs[N];
int n, m, a, b;

void dfs (int u) {
    vis[u] = 1;
    for (int v : adj[u]){
        if (!vis[v]){
            dfs(v);
        }
    }
    ord[ordn++] = u;
}

void dfst (int u) {
    vis[u] = 0;
    for (int v : adjt[u]){
        if (vis[v]){
            dfst(v);
        }
    }
    scc[u] = sccn;
    sz[sccn]++;
}

void dfss (int u) {
    vis[u] = 1;
    for (auto v : adjs[u]){
        if (!vis[v]){
            dfss(v);
        }
    }
}

void init () {
    cl(ord, 0);
    cl(scc, 0);
    cl(sz, 0);
    cl(vis, 0);
    for (int i = 0; i < N; i++) {
        adj[i].clear();
        adjt[i].clear();
        adjs[i].clear();
    }
}

int main () {
    int p;
    while (~scanf("%d %d", &n, &m)) {
        if (n==0 and m==0) break;
        init();
        for (int i = 1; i <= m; i++) {
            scanf("%d %d %d", &a, &b, &p);
            adj[a].pb(b);
            adjt[b].pb(a);
            if(p==2) adj[b].pb(a), adjt[a].pb(b);
        }    
        sccn = ordn = 1;
        for (int i = 1; i <= n; i++){
            if (!vis[i]){
                dfs(i);
            }
        }
 
        for (int i = n; i >= 1; i--) {
            if (vis[ord[i]]) {
                dfst(ord[i]);
                sccn++;
            }
        }
        sccn--;
        (sccn==1) ? cout << "1" << endl : cout << "0" << endl; 
    }
    return 0;
}
