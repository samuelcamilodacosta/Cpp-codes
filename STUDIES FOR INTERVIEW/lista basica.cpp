#include <bits/stdc++.h>
using namespace std;
/* 
aula.push_front(); adiciona primeiro
aula.push_back(); adiciona por ultimo
aula.pop_front(); deleta o primeiro
aula.pop_back(); deleta o ultimo
aula.sort(); ordena
aula.reverse(); inverte
*/
int main(){
	setlocale(LC_ALL,"");
	list <int> aula;
	int tam=10;
	list <int>::iterator it;
	
	for(int i=0; i<tam; i++){
		aula.push_front(i);
	}
	
	it=aula.begin();
	advance(it,5);
	aula.insert(it,0);
	
	cout << "Tamanho da lista: " << aula.size() << endl;
	aula.sort();
	aula.reverse();
	
	tam=aula.size();
	
	for(int i=0; i<tam; i++){
		cout << aula.front() << endl; 
		aula.pop_front();
	}
	
	return 0;
}

