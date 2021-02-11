#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED
using namespace std;
class Veiculo{
	public: 
		int velocidade;
		int tipo;
		Veiculo(int tp);
		int getvelocidadeMaxima();
		string getnome();
		bool getligado();
		void setligado(int l);
		
	private:
		std::string nome;
		int velocidadeMaxima;
		bool ligado;
		void setvelocidadeMaxima(int vm);
};
bool Veiculo::getligado(){
	return ligado;
}
void Veiculo::setligado(int l){
	(l==true) ? ligado = true : ligado=false;
}
string Veiculo::getnome(){
	return nome;
}
int Veiculo::getvelocidadeMaxima(){
	return velocidadeMaxima;		
}
void Veiculo::setvelocidadeMaxima(int vm){
	velocidadeMaxima = vm;
}
Veiculo::Veiculo(int tp){ // 1 == Carro, 2 == Moto, 3 == Bicicleta
	tipo=tp;
	switch(tipo){
		case 1:
			nome="Carro";
			setvelocidadeMaxima(300);
			break;
		case 2:
			nome="Moto";
			setvelocidadeMaxima(250);
			break;
		case 3:
			nome="Bicicleta";
			setvelocidadeMaxima(50);
			break;
		default:
			break;
		}
}

#endif
