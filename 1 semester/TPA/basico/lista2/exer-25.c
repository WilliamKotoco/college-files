#include<stdlib.h>
int main(){
	char nome[40];
	int idade;
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("\n Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("\n%p", &nome); // apresenta em qual endere�o de memoria est� o nome
	printf("\n%p", &idade);// apresenta em qual endere�o de memoria est� a idade
	printf("\n%lu", sizeof(nome));// retorna o tanto de memoria do char
	printf("\n%lu", sizeof(idade));// retorna o tanto de memoria do int

	
	return 0;
}
