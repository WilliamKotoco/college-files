#include <stdio.h>
int main(){
	int alunos, alunas, total;
	printf("Digite o n�mero de alunos(homens): ");
	scanf("%d", &alunos);
	printf("Digite o n�mero de alunas(mulheres): ");
	scanf("%d", &alunas);
	printf("Ha %d alunos", alunos);
	printf("\nHa %d alunas", alunas);
	total = alunos + alunas;	
	printf("\n totalizando: %d", total);
	return 0;
}
