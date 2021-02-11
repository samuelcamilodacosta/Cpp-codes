#include <bits/stdc++.h>
using namespace std;
class Aviao{
	public: 
		int velocidade;
		int velocidadeMaxima;
		string tipo;
		void ini(int tp);
	private:
	
};
void Aviao::ini(int tp){
	switch(tp){
	case 1:
		this->velocidadeMaxima=800;
		this->tipo = "Jato";
		break;
	case 2:
		this->velocidadeMaxima=350;
		this->tipo = "Monomotor";
		break;
	case 3:
		this->velocidadeMaxima=180;
		this->tipo = "Planador";
		break;
	default: 
		break;
	}
}

int main(){
	setlocale(LC_ALL,"");	
	Aviao *av1 = new Aviao();
	Aviao *av2 = new Aviao();
	av1->ini(1);
	av2->ini(2);
	cout << av1->velocidadeMaxima << endl;
	cout << av2->velocidadeMaxima << endl;
	return 0;
}
