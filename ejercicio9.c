#include <stdio.h>
#define SIZE 30

int main()
{
    int i, horausu, hora[SIZE], tipAuto[SIZE], cont = 0, cont2 = 0, cont3 = 0;

    for(i = 0; i < SIZE; i++)
    {
        printf("ingrese el tipo de auto (sabiendo que 1:Lamborghini, 2:Ferrari, 3:Bugatti): ");
        scanf("%d", &tipAuto[i]);
        printf("ingrese la hora: ");
        scanf("%d", &hora[i]);
    }

    printf("ingrese la hora para saber la cantidad de autos que pasaron en el peaje: ");
    scanf("%d", &horausu);

    for(i = 0; i < SIZE; i++)
    {
        if(hora[i] == horausu)
        {
            if(tipAuto[i] == 1)
                cont++;
            if(tipAuto[i] == 2)
                cont2++;
            if(tipAuto[i] == 3)
                cont3++;
        }
    }

    printf("A las %dhs ingresaron:\n", horausu);
    printf("Lamborghini: %d\n", cont);
    printf("Ferrari: %d\n", cont2);
    printf("Bugarri: %d\n", cont3);

    return 0;
}