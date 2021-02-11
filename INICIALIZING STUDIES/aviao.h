#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED
class Aviao{
public:
	int velocidade;
	int velocidadeMaxima;
	std::string tipo;
	Aviao(int tp);
	void imprimir();
private:
};

Aviao::Aviao(int tp){ // 1 = Jato, 2 = Monomotor, 3 = Planador
	if(tp == 1){
		tipo = "Jato";
		velocidadeMaxima=800;
	}
	else if(tp == 2){
		tipo = "Monomotor";
		velocidadeMaxima=350;
	}
	else if(tp == 3){
		tipo = "Planador";
		velocidadeMaxima=180;
	}
}
void Aviao::imprimir(){
	std::cout << "Tipo: " << tipo << std::endl;
	std::cout << "Velocidade máxima: " << velocidadeMaxima << std::endl;
	std::cout << "Velocidade atual: " << velocidade << std::endl;
	std::cout << std::endl << std::endl;
}

#endif
