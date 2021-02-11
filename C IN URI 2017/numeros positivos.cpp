#include <iostream>
using namespace std;
int main(){
	float vet[5]; 
	int positivos=0;
	for(int i=0; i<6; i++){
		cin >> vet[i];
		if(vet[i]>0){
			positivos++;
		}
	}
	printf("%d valores positivos", positivos);
	
	return 0;
}
