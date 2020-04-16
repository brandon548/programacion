#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMEROAZAR 20
#define NUMEROELEGIDO 5
int main()
{
    int i, numAzar[NUMEROAZAR], numElegido[NUMEROELEGIDO], j; 

    srand(time(NULL));

    for(i = 0; i < NUMEROAZAR; i++)
        numAzar[i] = 10 + (rand() % 31);

    printf("Ingrese 5 numeros entre 10 y 40\n");
    
    for(i = 0; i < NUMEROELEGIDO; i++)
    {
        printf("%d) ", i + 1);
        scanf("%d", &numElegido[i]);
    }

    for(i = 0; i < NUMEROELEGIDO; i++)
    {
        for(j = 0; j < NUMEROAZAR; j++)
            if(numElegido[i] == numAzar[j])
                printf("Numero ganador: %d\n", numElegido[i]);
    }
    return 0;
}