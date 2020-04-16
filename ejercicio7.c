#include <stdio.h>

long factorial( long );

int main(){
    int x, y, i, z, fac1, fac2, fac3, result;

    printf("ingrese la cantidad de lapices que tiene: ");
    scanf("%d", &x);
    printf("ingrese cuantas agarro: ");
    scanf("%d", &y);

    for(i = 1; i <= x; i++){
        fac1 = factorial(i);
    }

    for (i = 1; i <= y; i++)
    {
        fac2 = factorial(i);
    }

    z = x - y;

    for(i = 1; i <= z; i++){
        fac3 = factorial(i);
    }
    
    result = fac1 / (fac2 * fac3);

    printf("La cantidad de combinaciones es: %d", result);

    return 0;
}

long factorial(long num){
    if (num <= 1)
        return 1;
    else
        return (num * factorial(num - 1));    
}