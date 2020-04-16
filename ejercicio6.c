#include <stdio.h>

long double factorial(long double);

int main() {
    unsigned long int x, y, z, i, j;
    long double fac1, fac2, fac3, result;

    for(i = 0; i < 10; i++){
        printf("Ingrese dos valores entre el 15 y 60 sabiendo que el primer valor sea mayor que el segundo\n");
        printf("Primer valor: ");
        scanf("%lu", &x);
        printf("\nsegundo valor: ");
        scanf("%lu", &y);

        for(j = 1; j <= x; j++){
            fac1 = factorial(j);
        }

        for(j = 1; j <= y; j++){
            fac2 = factorial(j);
        }

        z = x - y;

        for(j = 1; j <= z; j++) {
            fac3 = factorial(j);
        }

        result = fac1 / (fac2 * fac3);

        printf("La cantidad de combinaciones es: %Lf", result);
    }

    return 0;
}

long double factorial(long double num){
    if (num <= 1)
        return 1;
    else
        return (num * factorial(num - 1));    
}