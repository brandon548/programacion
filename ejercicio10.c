#include <stdio.h>
#define SIZE 20
int main()
{
    int i, local[SIZE], visitante[SIZE], resultPartida[SIZE], contDePuntaje[10] =  {0}, numEquipo;

    for(i = 0; i < SIZE; i++)
    {
        printf("Partido N°%d\n", i + 1);
        printf("ingrese el numero del equipo local(nro.equipo 1 al 10): ");
        scanf("%d", &local[i]);
        printf("ingrese el numero del equipo visitante: ");
        scanf("%d", &visitante[i]);
        printf("ingrese el resultado del partida (1: gano el equipo local, 2: gano visitante, 3: empate): ");
        scanf("%d", &resultPartida[i]);
    }
    
    for(i = 0; i < SIZE; i++)
    {
        if(resultPartida[i] == 1)
        {
            contDePuntaje[local[i] - 1]++;
            contDePuntaje[visitante[i] - 1]--;
        }
        if(resultPartida[i] == 2)
        {
            contDePuntaje[visitante[i] - 1]++;
            contDePuntaje[local[i] - 1]--;
        }
    }

    printf("ingrese el numero del equipo para saber su puntaje: ");
    scanf("%d", &numEquipo);
    printf("el puntaje es: %d", contDePuntaje[numEquipo - 1]);

    return 0;
}