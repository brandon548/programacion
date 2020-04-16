#include <stdio.h>
#define SIZE 35
#define TEMPMIN 3
#define TEMPMAX 22

int main()
{
    int i,regisDeTemp;

    for(i = 0; i < SIZE; i++)
    {
        printf("%d) ingrese la temperatura de la maquina (rango de temperatura: 3°c a 22°c): ", i + 1);
        scanf("%d", &regisDeTemp);

        if(regisDeTemp >= TEMPMIN && regisDeTemp <= TEMPMAX)
        {
            if(regisDeTemp < 9)
                printf("Baja temperatura\n");
            else if(regisDeTemp <= 19)
                    printf("Temperatura normal\n");
                else
                {
                    printf("Alta temperatura\n");
                }  
        }
    }
    return 0; 
}