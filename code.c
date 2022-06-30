// Gabriel Torres
#include <stdio.h>
#include <stdlib.h>
#define tam 50
int main()
{
	int vetorA[tam], vetorB[tam], i, aux=5;

	for(i=0;i<tam;i++){
		vetorA[i]=aux;
		aux+=1;
		printf("vetorA[%d] = %d\n",i, vetorA[i] );
	}
	aux=19;
	for(i=0;i<tam;i++){
		vetorB[aux]=vetorA[i];
		aux--;
	}
	printf("\n");

	for(i=0;i<tam;i++){
		printf("vetorB[%d] = %d\n",i, vetorB[i] );
	}
}
