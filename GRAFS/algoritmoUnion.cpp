// Union-find
#include <bits/stdc++.h>
using namespace std;

int buscar(int subset[], int v){
    if(subset[v] == -1){
        return v;
    }
    return buscar(subset,subset[v]);
}

void unir(int subset[], int v1, int v2){
    int v1_set = buscar(subset, v1);
    int v2_set = buscar(subset, v2);
    subset[v1_set] = v2_set;
}

int tem_ciclo(int grafo[3][3]){
    int * subset = (int*)malloc(3*sizeof(int));
    
    //inicializa todos os subconjuntos como conjuntos de um único elemento
    memset(subset,-1,sizeof(int)*3);
    for(int i=0; i<3; i++){
        for(int j=i; j<3; j++){
            if(grafo[i][j] == 1){
                int v1 = buscar(subset, i);
                int v2 = buscar(subset, j);
                
                if(v1 == v2){
                    return 1;
                }else{
                    unir(subset,v1,v2);
                }
            }
        }
    }
    return 0;
}



int main(){
    int grafo[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    
    grafo[0][1] = 1;
    grafo[1][0] = 1;
    grafo[1][2] = 1;
    grafo[2][1] = 1;
    grafo[0][2] = 1;
    grafo[2][0] = 1;
 
    if(tem_ciclo(grafo)){
        cout << "O grafo tem ciclo!" << endl;
    }else{
        cout << "O grafo não tem ciclo!" << endl;
    }
    
    return 0;
}
