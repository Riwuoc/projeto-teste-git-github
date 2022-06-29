/*
Questão 04
Ler 20 elementos de uma matriz A tipo vetor e construir uma matriz B de mesma dimensão com os
mesmos elementos de A, sendo que estes deverão estar invertidos. Ou seja, o primeiro elemento de A
passa a ser o último elemento de B. O segundo elemento de A passa a ser o penúltimo de B e assim por
diante.

entrada de dados:
VetorA com 20 elementos.

saida de dados:
VetorB com 20 elementos.

processamento:
popular vetor A com numeros inteiros;
popular o vetor B apartir do final com os elementos do vetorA;
imprimir os valores do vetorB;
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vetorA[20], vetorB[20], i, aux=5;

	for(i=0;i<20;i++){
		vetorA[i]=aux;
		aux+=1;
		printf("vetorA[%d] = %d\n",i, vetorA[i] );
	}
	aux=19;
	for(i=0;i<20;i++){
		vetorB[aux]=vetorA[i];
		aux--;
	}

	printf("\n");

	for(i=0;i<20;i++){
		printf("vetorB[%d] = %d\n",i, vetorB[i] );
	}
}
