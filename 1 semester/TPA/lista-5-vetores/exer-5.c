/*
Escreva um programa para simular as opera��es de uma pilha (First in last out - FILO), com 10
posi��es.

 O primeiro elemento a ser empilhado � o �ltimo a ser retirado da pilha.
  Este tipo de
estrutura � comumente utilizado para gerenciar chamadas de fun��es, por exemplo. O programa
deve ter as opera��es de inser��o e remo��o. O processo de remo��o n�o � f�sico. Uma remo��o
deve ser controlada por uma indica��o l�gica.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, opcao, num, vetor[10];
	for (i = 0; i<10; i++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		vetor[i] = num;
	}
	printf("\n Entradas: ");
		for(i = 0; i<10; i++){
		printf("\t %d ", vetor[i]);
	}
	
	while (1){
		printf("\n Digite 1 para remover o ultimo elemento, qualquer outro numero para nao fazer nada: ");
		scanf("%d", &opcao);
		if (opcao == 1){
			printf("\n Elemento %d removido", vetor[9]);
			break;
		}
		else{
			printf("\n Nada foi feito");
			break;
		}
	}

	//	vetor[10] = "\0";
	/* printf("\n Saidas: ");
	for(i = 9; i >= 0; i--){
		printf("\t %d",vetor[i]);
	} */
	return 0;
}





