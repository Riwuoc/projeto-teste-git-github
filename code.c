
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
