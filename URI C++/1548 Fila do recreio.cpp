#include <bits/stdc++.h>
using namespace std;


int main(){
	setlocale(LC_ALL,"");
	int n=0, m=0, x, cont;
	cin >> n;
	while(n!=0){
		cont = 0;
		list <int> alunos;
		list <int> alunosordenados;
		cin >> m;
		for(int i=0; i<m; i++){
			cin >> x;
			alunos.push_front(x);
			alunosordenados.push_front(x);
		}
		alunosordenados.sort();
		for(int i=0; i<m; i++){
			if(alunos.front() == alunosordenados.front()){
				cont++;
			}
			alunos.pop_front();
			alunosordenados.pop_front();
		}
		cout << cont << endl;
		n--;
	}
	return 0;
}

