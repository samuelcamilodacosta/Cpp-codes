#include <bits/stdc++.h>
using namespace std;

class Coordenada{
public:
    int x, y;
    bool visitada;
};

int winner;

void busca(vector<vector <int>> matriz, vector<vector<Coordenada>> coordenadas, int i, int j){
        if(0<=i && i<5 && 0<=j && j<5 && !winner){
            coordenadas[i][j].visitada = true;
            if(i==4 && j==4){
                winner = 1;
            }else{
                if(i+1<5 && matriz[i+1][j] == 0 && !coordenadas[i+1][j].visitada){
                    busca(matriz, coordenadas, i+1,j);}
                if(i-1>=0 && matriz[i-1][j] == 0 && !coordenadas[i-1][j].visitada){
                    busca(matriz, coordenadas, i-1,j);}
                if(j+1<5 && matriz[i][j+1] == 0 && !coordenadas[i][j+1].visitada){
                    busca(matriz, coordenadas, i, j+1);}
                if(j-1>=0 && matriz[i][j-1] == 0 && !coordenadas[i][j-1].visitada){
                    busca(matriz, coordenadas, i, j-1);}
            }
        }
}

int main(){
    int T;
    
    cin >> T;
    while(T>0){
        vector<vector <int>> matriz(5);
        vector<vector <Coordenada>> coordenadas(5);
        for(int i=0; i<5; i++){
            matriz[i].resize(5);
            coordenadas[i].resize(5);
        }
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                int e;
                cin >> e;
                matriz[i][j] = e;
                coordenadas[i][j].x = i;
                coordenadas[i][j].y = j;
                coordenadas[i][j].visitada = false;
            }
        }
        winner = 0;
        busca(matriz, coordenadas, 0, 0);
        if(winner)
            cout << "COPS" << endl;
        else
            cout << "ROBBERS" << endl;
        T--;
    }
    return 0;
}
