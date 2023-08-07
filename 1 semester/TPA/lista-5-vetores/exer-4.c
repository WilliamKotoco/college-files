/* 
Escreva um programa em linguagem C para que usu�rio forne�a 10 valores inteiros. O
programa deve permitir entradas de valores maiores que 0.

 Os primeiros cinco valores devem ser armazenados em um vetor A e os demais em um vetor B.
 
 Em seguida, o programa deve efetuar a multiplica��o entre os valores dispon�veis em A e B, armazenando o resultado em um terceiro vetor
C. 

As posi��es devem ser multiplicadas de maneira invertida, ou seja, a primeira posi��o do vetor
A deve ser multiplicada pela �ltima posi��o do vetor B. 

O resultado deve ser armazenado na �ltima
posi��o do vetor C. Esse processo deve ser realizado por meio de estruturas de repeti��es.
*/ 
#include<stdlib.h>
#include<stdio.h>
int main(){
	int i, k = 0, numero, numeros[10], A[5], B[5], C[5];
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &numero);
		numeros[k] = numero;
		k++;
	} while(k < 10 && numero > 0);
	for (i = 0; i<5; i++){
		A[i] = numeros[i] ;
		B[i] = numeros[i+5] ;
				
	}
	for (i = 0; i<5; i++){
		C[4-i] = A[i] * B[4-i];
	}
		
		printf("\n A");
		for (i = 0; i<5; i++){
		printf("\t  %d ", A[i]);
		}
		printf("\n B");
		for (i = 0; i<5; i++){
		printf("\t  %d ", B[i]);
		} 
		printf("\n C");
		for (i=0; i<5; i++){
			printf("\t  %d", C[i]);
		}
	return 0;
}
