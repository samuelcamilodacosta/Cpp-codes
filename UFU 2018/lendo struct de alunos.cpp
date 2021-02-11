#include <iostream>
#include <cstdlib>
struct aluno{
	char nome[30];
	float media;
	int faltas;
};
int main(char **argv, int *arc){
	struct aluno *p;
	int n, m, i;
	scanf("%d", &n);
	m = n;
	p = (struct aluno*) malloc(n*sizeof(struct aluno));
	do{
		n = n-1;
		printf("Nome: ");
		fflush(stdin);
		scanf("%s", &(p[i].nome));
		printf("Media: ");
		scanf("%f", &p[i].media);	
		printf("Faltas: ");
		scanf("%d", &p[i].faltas);
		i = i+1;
	}while(n!=0);
	int j=m;
	do{
		j = j-1;
		printf("Nome: %s, Media: %f, Faltas: %d\n", p[j].nome, p[j].media, p[j].faltas);
	}while(j!=0);
	free(p);
	return 0;
}
