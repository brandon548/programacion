#include <stdio.h>

int main()
{
    int i, cantDeAlumnos, nota1, nota2, nota3, promMayor = 0;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &cantDeAlumnos);

    int promAlumnos[cantDeAlumnos];

    for(i = 0; i < cantDeAlumnos; i++)
    {
        printf("Alumno N %d\n", i + 1);
        printf("Nota del Primer Trimestre: ");
        scanf("%d", &nota1);
        printf("Nota del Segundo Trimestre: ");
        scanf("%d", &nota2);
        printf("Nota del Tercer Trimestre: ");
        scanf("%d", &nota3);

        promAlumnos[i] = (nota1 + nota2 + nota3) / 3;
    }

    for (i = 0; i < cantDeAlumnos; i++)
    {
        if(promMayor < promAlumnos[i])
            promMayor = promAlumnos[i];        
    }
    printf("El promedio mayor es: %d", promMayor);
    
    return 0;
}