#include <bits/stdc++.h>

using namespace std;

class Grafo{
    int V; // número de vértices
    list <int> *adj ; // ponteiro para um array contendo as listas de adjacências
    
public:
    Grafo(int V); //construtor
    void adicionarAresta(int v1, int v2); // adiciona uma aresta no grafo
    
    //obtém o grau de saída de um dado vértices
    // grau de saída é o número de arcos que saem de "V"
    int obterGrauDeSaida(int v);
    
    bool existeVizinho(int v1, int v2); //verifica se v2 é vizinho de v1
};

Grafo::Grafo(int V){
    this->V = V; // atribui o número de vértices
    adj = new list <int> [V]; // cria as listas
}

void Grafo::adicionarAresta(int v1, int v2){
    //adiciona vértice v2 à lista de vértices adjacentes de v1
    adj[v1].push_back(v2);
}

int Grafo::obterGrauDeSaida(int v){
    //basta retornar o tamanho da lista que é a quantidade de vizinhos
    return adj[v].size();
}
bool Grafo::existeVizinho(int v1, int v2){
    if(find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end()){
        return true;
    }
    return false;
}

int main(){
    //criando um grafo de 4 vertices
    Grafo grafo(4);
    
    //adicionando as arestas
    grafo.adicionarAresta(0,1);
    grafo.adicionarAresta(0,3);
    grafo.adicionarAresta(1,2);
    grafo.adicionarAresta(3,1);
    grafo.adicionarAresta(3,2);
    
    //mostrando os graus de saída
    cout << "Grau de saída do vértice 1: " << grafo.obterGrauDeSaida(1) << endl;
    cout << "Grau de saída do vértice 2: " << grafo.obterGrauDeSaida(2) << endl;
    cout << "Grau de saída do vértice 3: " << grafo.obterGrauDeSaida(3) << endl;
    
    if(grafo.existeVizinho(0,1)){
        cout << "É vizinho de 0" << endl;
    }else{
        cout << "Não é vizinho de 0" << endl;
    }
    
    if(grafo.existeVizinho(0,2)){
        cout << "É vizinho de 0" << endl;
    }else{
        cout << "Não é vizinho de 0" << endl;
    }
    
    if(grafo.existeVizinho(0,3)){
        cout << "É vizinho de 0" << endl;
    }else{
        cout << "Não é vizinho de 0" << endl;
    }
    return 0;
}
