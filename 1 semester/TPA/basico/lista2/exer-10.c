/* Fa�a um algoritmo para ler dois n�meros. O primeiro valor deve ser armazenado em uma vari�vel
de nome A e o segundo na vari�vel B. Realize a troca, tal que B armazena o valor de A e A o valor 
de B.
Ap�s a troca, imprima os resuldos. */

#include<stdlib.h>
int main(){
	int a,b, c;
	printf("Digite A: ");
	scanf("%d", &a);
	printf("Digite B: ");
	scanf("%d", &b);
	c = a;
	a = b;
	printf("\n%d e %d", c,b);
	
	return 0;
}
