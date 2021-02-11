#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <string> map;
    int M, N;
    string X;
    int i=0, j=0, cont=0;
    cin >> M >> N;
    for(i=0; i<M; i++){
        cin >> X;
        map.push_back(X);
    }
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            if(map[i][j]=='#'){
                cont++;
                if(i>0 && j>0 && i<M-1 && j<N-1){ //pode verificar
                    if(map[i][j+1]=='#' && map[i][j-1]=='#' && map[i+1][j]=='#' && map[i-1][j]=='#'){
                        cont--;
                    }
                }
            }
        }
    }
    cout << cont << endl;
    return 0;
}
