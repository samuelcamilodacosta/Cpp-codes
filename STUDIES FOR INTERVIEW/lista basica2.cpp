#include <bits/stdc++.h>
using namespace std;
/*
aula.begin(); começa no iterator
advance(iterator, distancia);
aula.insert(iterator, valor para inserir)
aula.erase(iterator); // remove a posição ditada posterior
*/

int main(){
	setlocale(LC_ALL,"");
	list<int> aula;
	int tam=10;
	list <int>::iterator it;
	
	for(int i=0; i<tam; i++){
		aula.push_front(i);
	}
	
	it = aula.begin();
	advance(it,3);
	aula.insert(it,0);
	aula.erase(--it);	
	for(int i=0; i<tam; i++){
		cout << aula.front() << endl;
		aula.pop_front();
	}
	
	return 0;
}

