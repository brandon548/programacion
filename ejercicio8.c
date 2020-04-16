#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int edades, sexo, M = 0, F = 0, deporte, futbol = 0, natacion = 0, voley = 0, i;
    srand(time(NULL));

    for(i = 0; i < 30; i++)
    {
        edades = 15 + (rand() % 6);
        sexo = 1 + (rand() % 2);
        if(sexo == 1)
            M++;
        if(sexo == 2)
            F++;
    }

    if(M > F)
        for(i = 0; i < 20; i++)
        {
            deporte = 1 + (rand() % 4);
            if(deporte == 1)
                futbol++;
            
            if(deporte == 2)
                natacion++;
            
            if(deporte == 3)
                voley++;
        }

    if(futbol > natacion){
        if(futbol > voley)
            printf("se practica mas futbol con %d integrantes", futbol);
        else
            printf("Se practica mas voley con %d integrantes", voley);
    }
    else{ 
        if(natacion > voley)
            printf("Se practica mas natacion con %d integrantes", natacion);
        else
            printf("Se practica mas voley con %d integrantes", voley);
    }
    return 0; 
}