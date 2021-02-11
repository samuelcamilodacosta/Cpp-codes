#include <bits/stdc++.h>
using namespace std;

class Produto{
	private:
		string nome;
		int codigoProduto, vendidos, preco;
	public: 
		void setNome(string nome){
			this->nome = nome;	
		}
		string getNome(){
			return nome;
		}
		void setCodigoProduto(int codigoProduto){
			this->codigoProduto = codigoProduto;
		}
		int getCodigoProduto(){
			return codigoProduto;
		}
		void setVendidos(int vendidos){
			this->vendidos = vendidos;
		}
		int getVendidos(){
			return vendidos;
		}
		void setPreco(int preco){
			this->preco = preco;
		}
		int getPreco(){
			return preco;
		}
};

int main(){
	setlocale(LC_ALL,"");
	string nome;
	int codigoProduto=0, vendidos=0, preco=0;
	Produto *p = new Produto();
	cout << "Informe o nome do " << 1 << "º produto: ";
	cin >> nome;
	p->setNome(nome);
	cout << "Informe o código do produto: ";
	cin >> codigoProduto;
	p->setCodigoProduto(codigoProduto);
	cout << "Informe o número total de produtos vendidos: ";
	cin >> vendidos;
	p->setVendidos(vendidos);
	cout << "Preço do produto: ";
	cin >> preco;
	p->setPreco(preco);
	cout << "\n";
	cout << "\tNome do produto: " << p->getNome() << endl;
	cout << "\tO código do produto: " << p->getCodigoProduto() << endl;
	cout << "\tGerou receita até o momento de: " << (p->getPreco())*(p->getVendidos()) << endl;
	cout << "\n";
	return 0;
}
