#include <stdio.h>
#include <stdlib.h>
#include "fun.h"

void menuUno(void){

    printf("1) Calcular la suma (A+B)\n");
    printf("2) Calcular la resta (A-B)\n");
    printf("3) Calcular la division (A/B)\n");
    printf("4) Calcular la multiplicacion (A*B)\n");
    printf("5) Calcular el factorial (A!)(B!)\n");
    printf("6) Salir.\n");

}

float suma(float n1, float n2)
{
float resultado;
resultado = n1 + n2;
return resultado;
}

float resta(float n1, float n2)
{
float resultado;
resultado = n1 - n2;
return resultado;
}

float multiplicacion(float n1, float n2)
{
float resultado;
resultado = n1 * n2;
return resultado;
}

float division(float n1, float n2)
{
float resultado;
resultado = n1 / n2;
return resultado;
}

int factorial(int n1)
{
    int factorial =1;
    int contador;
    for(contador = 1; contador <= n1; contador++)
        {
        factorial = factorial * contador;
        }
    return factorial;
}

int getInt(void)
{
    int x;

    printf("Ingrese el entero a ingresar: ");
    scanf("%d", &x);

    return x;
}

float getFloat(void)
{
    float x;

    printf("Ingrese el flotante a ingresar: ");
    scanf("%f", &x);

    return x;
}
char getChara(void)
{
    char x;

    printf("Ingrese el caracter a ingresar: ");
    scanf("%c", &x);
    fflush(stdin);

    return x;
}




