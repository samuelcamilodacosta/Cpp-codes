#include <bits/stdc++.h>
#define MAX 1030
using namespace std;

char mapa[MAX][MAX];
int n, m;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
bool noMapa(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
	}
    return mapa[i][j] == '.';
}
void dfs(int i, int j){
    mapa[i][j] = 'o';
    for(int x=0; x<4; x++){
        if(noMapa(i + dx[x], j + dy[x])){
            dfs(i + dx[x], j + dy[x]);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> mapa[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mapa[i][j] == '.'){
                ans++;
                dfs(i, j);
            }
        }
    }
    cout << ans << endl;
    return 0;   
}
