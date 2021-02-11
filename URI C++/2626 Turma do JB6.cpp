#include <bits/stdc++.h>
using namespace std;
int comparacao(string x){
	string array[] = {"pedra", "papel", "tesoura"};
	for(int i=0; i<3; i++){
		if(array[i] == x){
			return i;
		}
	}
}
int main(){
	setlocale(LC_ALL,"");
	string x1, y1, z1;
	int x, y, z, teste;
	while(cin >> x1 >> y1 >> z1){
		x = comparacao(x1);
		y = comparacao(y1);
		z = comparacao(z1);
		if((x==0 && y==2 && z==2) || (x==1 && y==0 && z==0) || (x==2 && y==1 && z==1)){
			cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
		}else if((x==2 && y==0 && z==2) || (x==0 && y==1 && z==0) || (x==1 && y==2 && z==1)){
			cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
		}else if((x==2 && y==2 && z==0) || (x==0 && y==0 && z==1) || (x==1 && y==1 && z==2)){
			cout << "Urano perdeu algo muito precioso..." << endl;
		}else{
			cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
		}
	}
	return 0;
}

