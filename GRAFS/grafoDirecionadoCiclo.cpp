// Grafos - Verifica se um grafo direcionado tem ciclo

#include <bits/stdc++.h>
using namespace std;

class Grafo{
    int V;
    list<int> *adj;
    
public:
    Grafo(int V);
    void adicionarAresta(int v1, int v2);
    //faz uma DFS a partir de um vértice, retorna se achou ou não ciclo
    bool dfs(int v);
    
    bool temCiclo();
};

Grafo::Grafo(int V){
    this->V = V;
    adj = new list<int>[V];
}
void Grafo::adicionarAresta(int v1, int v2){
    adj[v1].push_back(v2);
}

bool Grafo::dfs(int v){
    stack<int> pilha;
    bool visitados[V], pilha_rec[V];
    
    //inicializa visitados e pilha_rec com false
    for(int i=0; i<V; i++)
        visitados[i] = pilha_rec[i] = false;
    
    //faz um DFS
    while(true){
        bool achou_vizinho = false;
        list<int>::iterator it;
        if(!visitados[v]){
            pilha.push(v);
            visitados[v] = pilha_rec[v] = true;
        }
        for(it=adj[v].begin(); it!= adj[v].end(); it++){
            if(pilha_rec[*it]){ // se o vizinho já está na pilha é porque existe ciclo
                return true;
            }
            else if(!visitados[*it]){ //se não está na pilha e não foi visitado, significa que achou
                achou_vizinho = true;
                break;
            }
        }
        if(!achou_vizinho){
            pilha_rec[pilha.top()] = false; // marca que saiu da pilha
            pilha.pop(); // remove da pilha
            if(pilha.empty())
                break;
            v = pilha.top();
        }else
            v = *it;
    }
    return false;
}

bool Grafo::temCiclo(){
    for(int i=0; i<V; i++){
        if(dfs(i)){
            return true;
        }
    }
    return false;
}
int main(){
    Grafo grafo(4);
    grafo.adicionarAresta(0,1);
    grafo.adicionarAresta(0,2);
    grafo.adicionarAresta(1,3);
    grafo.adicionarAresta(3,0);
    
    if(grafo.temCiclo())
        cout << "Contém ciclo" << endl;
    else
        cout << "Não contém ciclo" << endl;
 
    return 0;
}
