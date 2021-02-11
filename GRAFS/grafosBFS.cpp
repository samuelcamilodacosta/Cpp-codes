//Grafos - BFS - Busca em largura
#include <bits/stdc++.h>
using namespace std;
class Grafo{
    int V;
    list<int> *adj;

public:
    Grafo (int V);
    void adicionarAresta(int v1, int v2);
    
    //faz uma BFS a partir de um vértice
    int bfs(int v);
};

Grafo::Grafo(int V){
    this->V = V;
    adj = new list<int>[V];
}

void Grafo::adicionarAresta(int v1, int v2){
    adj[v1].push_back(v2);
}

int Grafo::bfs(int v){
    queue<int> fila;
    bool visitados[V];
    int contador=0;
    for(int i=0; i<V; i++){
        visitados[i] = false;
    }
    cout << "Visitando vértice: " << v << endl;
    visitados[v] = true;
    while(true){
        list<int>::iterator it;
        for(it=adj[v].begin(); it!=adj[v].end(); it++){
            if(!visitados[*it]){
             //cout << "Visitando vertice: " << *it << endl;
                contador++;
                visitados[*it] = true; // marca como visitado
                fila.push(*it); // insere na fila
            }
        }
        if(!fila.empty()){
            v = fila.front(); // obtém o primeiro elemento
            fila.pop(); // remove da fila
        }
        else{
            return contador;
        }
    }
}

int main(){
    int V = 4;
    Grafo grafo(V);
    
    //adicionando arestas
    grafo.adicionarAresta(0,1);
    grafo.adicionarAresta(0,2);
    grafo.adicionarAresta(2,0);
    grafo.adicionarAresta(1,3);
    grafo.adicionarAresta(2,3);
    grafo.adicionarAresta(3,0);
    grafo.adicionarAresta(0,3);
    
    cout << grafo.bfs(0) << endl;
    cout << grafo.bfs(1) << endl;
    cout << grafo.bfs(2) << endl;
    cout << grafo.bfs(3) << endl;
    //grafo.bfs(3);
    return 0;
}
