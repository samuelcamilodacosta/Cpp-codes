//Grafo Matriz de Adjacencia

#include <bits/stdc++.h>
using namespace std;

int grafo[5][5] ={
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {1, 1, 0, 1, 1},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 1, 0}
};

bool temLigacao(int v1, int v2){
        if(grafo[v1][v2]){
            return true;
        }
        return false;
}

int main(){
    cout << temLigacao(0, 4) << endl;
    cout << temLigacao(0, 2) << endl;
    return 0;
}
