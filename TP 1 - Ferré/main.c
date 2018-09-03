#include <stdio.h>
#include <stdlib.h>
#include "fun.h"

/*
    ALUMNO : Ferré Nicolás
    MATERIA: Laboratorio 1.
    DIVISION: 1A.

• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
*/
int main()
{
    char seguir='s';
    int opcion=0;
    int opcionDos=0;
    float numeroUno=0;
    float numeroDos=0;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    float resultadoFactorialA;
    float resultadoFactorialB;



    while(seguir =='s')
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%.f)\n", numeroUno);
        printf("2- Ingresar 2do operando (B=%.f)\n", numeroDos);
        printf("3- Calcular todas las operaciones.\n");
        printf("4- Informar todos los resultados.\n");
        printf("5- Salir.\n");

        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
                printf("Ingresar 1er operando (A=%.f): \n", numeroUno);
                scanf("%f", &numeroUno);
                system("pause");
                break;
        case 2:
                printf("Ingresar 2do operando (B=%.f)\n", numeroDos);
                scanf("%f", &numeroDos);
                system("pause");
                break;
        case 3:
            menuUno();
            scanf("%d", &opcionDos);
            switch(opcionDos)
            {
                case 1:
                    resultadoSuma = suma(numeroUno, numeroDos);
                    continue;
                case 2:
                    resultadoResta = resta(numeroUno, numeroDos);
                    continue;
                case 3:
                    resultadoDivision = division(numeroUno, numeroDos);
                    continue;
                case 4:
                    resultadoMultiplicacion =multiplicacion(numeroUno, numeroDos);
                    continue;
                case 5:
                    resultadoFactorialA = factorial(numeroUno);
                    resultadoFactorialB = factorial(numeroDos);
                    continue;
                case 6:

                    continue;
            }
            system("pause");
            break;

        case 4:

            printf("El resultado de A+B es: %.f\n", resultadoSuma);
            printf("El resultado de A-B es: %.f\n", resultadoResta);

            if(numeroDos == 0){
                printf("No es posible dividir por 0.\n");
            }   else{
                printf("El resultado de A/B es: %.f\n", resultadoDivision);
            }

            printf("El resultado de A*B es: %.f\n", resultadoMultiplicacion);
            printf("El factorial de A es: %.f y el factorial de B es: %.f\n", resultadoFactorialA, resultadoFactorialB);
            system("pause");
            break;

        case 5:
                seguir = 'n';
                system("pause");
                break;


        }
    }




    return 0;
}
