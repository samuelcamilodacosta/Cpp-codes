#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DC 0 
#define DD 2 
#define DU 7 

typedef
	struct Aluno {
		char nome[256];
		int matricula;
		unsigned int idade;
	}
Aluno;

void mostrar(Aluno aluno) {
	printf("> %s: MAT %03d\n: %u anos;\n", aluno.nome, aluno.matricula, aluno.idade);
}
		
void gravar(Aluno aluno) {
	FILE * arq;
	arq = fopen("registro.txt","a");
	fwrite(&(aluno.nome),256,1,arq);
	fwrite(&(aluno.matricula),sizeof(int),1,arq);
	fwrite(&(aluno.idade),sizeof(unsigned int),1,arq);
	fclose(arq);
}

int ler(FILE * arq, Aluno * paluno, unsigned int id) {
	fseek(arq,id*sizeof(Aluno),SEEK_SET);
	int ok = fread(&(paluno->nome),256,1,arq);
	fread(&(paluno->matricula),sizeof(int),1,arq);
	fread(&(paluno->idade),sizeof(unsigned int),1,arq);
	return ok;
}

void inicia() {
	remove("registro.txt");
	Aluno aluno;
	strncpy(aluno.nome,"Oswald",256);
	aluno.matricula = rand()%999 + 1;
	aluno.idade = rand()%11 + 17;
	gravar(aluno);
	strncpy(aluno.nome,"Samuel", 256);
	aluno.matricula = 27;
	aluno.idade = 19;
	gravar(aluno);
	strncpy(aluno.nome,"Silvia", 256);
	aluno.matricula = rand()%999 + 1;
	aluno.idade = rand()%15 + 17;
	gravar(aluno);
	strncpy(aluno.nome,"Mickey", 256);
	aluno.matricula = rand()%999 + 1;
	aluno.idade = rand()%9 + 17;
	gravar(aluno);
}

int main() {
	srand(DC*100+DD*10+DU);
	Aluno aluno;
	FILE * arq;
	unsigned int i;
	inicia();
	arq = fopen("registro.txt","r");
	i = 0;
	while(!feof(arq)) {
		if(ler(arq, &aluno, i))
			mostrar(aluno);
		i++;
	}
	fclose(arq);
	return EXIT_SUCCESS;
}
