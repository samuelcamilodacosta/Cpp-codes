// Algoritmo de Kruskal - Ciclos com o algoritmo Union-Find em grafos não direcionados 

#include <bits/stdc++.h>
using namespace std;

class Aresta{
    int vertice1, vertice2, peso;
    
public:
    Aresta(int v1, int v2, int peso){
        vertice1 = v1;
        vertice2 = v2;
        this->peso = peso;
    }
    int obterVertice1(){
        return vertice1;
    }
    int obterVertice2(){
        return vertice2;
    }
    int obterPeso(){
        return peso;
    }
    bool operator < (const Aresta& aresta2) const{
        return (peso < aresta2.peso);
    }
};

class Grafo{
    int V;
    vector<Aresta> arestas;
  
public:
    Grafo(int V){
        this->V = V;
    }
    void adicionarAresta(int v1, int v2, int peso){
        Aresta aresta(v1, v2, peso);
        arestas.push_back(aresta);
    }
    int buscar(int subset[], int i){
        if(subset[i] == -1)
            return i;
        return buscar(subset,subset[i]);
    }
    void unir(int subset[], int v1, int v2){
        int v1_set = buscar(subset, v1);
        int v2_set = buscar(subset, v2);
        subset[v1_set] = v2_set;
    }
    int kruskal(){
        int comprimento=0;
        vector <Aresta> arvore;
        int size_arestas = arestas.size();
        sort(arestas.begin(), arestas.end());
        int * subset = new int[V];
        memset(subset,-1,sizeof(int)*V);
        for(int i=0; i<size_arestas; i++){
            int v1 = buscar(subset, arestas[i].obterVertice1());
            int v2 = buscar(subset, arestas[i].obterVertice2());
            
            if(v1!=v2){
                arvore.push_back(arestas[i]);
                unir(subset,v1,v2);
            }
        }
        int size_arvore = arvore.size();
        for(int i=0; i<size_arvore; i++){
            comprimento += arvore[i].obterPeso();
        }
        return comprimento;
    }
};

int main(){
    int N, M, U, V, C;
    cin >> N >> M;
    Grafo g(N+1); 
    while(M>0){
        cin >> U >> V >> C;
        g.adicionarAresta(U, V, C);
        M--;
    }
    cout << g.kruskal() << endl;
    return 0;
}
 
