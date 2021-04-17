/*
 ============================================================================
 Name        : tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "formulas.h"

int main(void) {
	setbuf(stdout, NULL);
	char salir='n';
	    char opcion;
	    int nun1=0;
	    int nun2=0;
	    int banderaNun1=0;
	    int banderaNun2=0;
	    int banderaOperaciones=0;
	    int resultadoSuma;
	    int resultadoResta;
	    float resultadoDivision;
	    int resultadoMultiplicacion;
	    int resultadoFacNun1;
	    int resultadoFacNun2;

	    do
	    {
	        system("cls");
	        printf("  ****menu de opciones****\n\n");
	        printf("1. Ingresar 1er operando (A=%d)\n", nun1);
	        printf("2. Ingresar 2do operando (B=%d)\n", nun2);
	        printf("3. Calcular todas las operaciones\n"
	               "a) Calcular la suma (A+B)\n"
	               "b) Calcular la resta (A-B)\n"
	               "c) Calcular la division (A/B)\n"
	               "d) Calcular la multiplicacion (A*B)\n"
	               "e) Calcular el factorial (A!)\n");
	        printf("4. Informar resultados\n");
	        printf("5. salir\n");
	        printf("ingrese una opcion: ");
	        fflush(stdin);
	        scanf("%c", &opcion);

	        switch(opcion)
	        {
	        case '1':
	            printf("ingrese el 1er operando: ");
	            scanf("%d", &nun1);
	            fflush(stdin);
	            banderaNun1=1;
	            break;
	        case '2':
	            if(banderaNun1)
	            {
	                printf("ingrese el 2do operando: ");
	                scanf("%d", &nun2);
	                fflush(stdin);
	                banderaNun2=1;
	                break;
	            }
	            else
	            {
	                printf("no se ingreso el 1re operando\n");
	                system("pause");
	            }
	            break;

	        case '3':
	            if(banderaNun1 && banderaNun2)
	            {
	                resultadoSuma= suma(nun1, nun2);

	                resultadoResta=resta(nun1, nun2);

	                resultadoDivision=division(nun1, nun2);

	                resultadoMultiplicacion=multiplicacion(nun1, nun2);

	                resultadoFacNun1=factorial(nun1);

	                resultadoFacNun2=factorial(nun2);

	                banderaOperaciones=1;

	            }
	            else
	            {
	                printf("no se ingresaron los dos valores\n");
	                system("pause");
	            }
	            break;
	        case '4':
	            if(banderaNun1 && banderaNun2 && banderaOperaciones)
	            {
	                printf("el resultado de a+b es %d\n", resultadoSuma);
	                printf("el resultado de a-b es %d\n", resultadoResta);
	                if(nun2!=0)
	                {
	                    printf("el resultado de a/b es %.2f\n", resultadoDivision);
	                }
	                else
	                {
	                    printf("no es posible dividir por cero\n");
	                }
	                printf("el resultado de a*b es %d\n", resultadoMultiplicacion);

	                if(nun1<0&&nun2<0)
	                {
	                    printf("no es posible sacar factorial de numeros negativos\n");
	                }
	                else if(nun2<0)
	                {
	                    printf("el factorial de a es %d y el de b no es posible ya que es numero negativo\n", resultadoFacNun1);

	                }
	                else if(nun1<0)
	                {
	                    printf("el factorial de b es %d y el de a no es posible ya que es un numero negativo\n", resultadoFacNun2);

	                }
	                else if(nun1>=0&&nun2>=0)
	                {
	                    printf("el factorial de a es %d y el factorial de b es %d\n", resultadoFacNun1, resultadoFacNun2);
	                }

	                banderaNun1=0;
	                banderaNun2=0;
	                banderaOperaciones=0;
	                system("pause");
	            }
	            else
	            {
	                printf("primero debe ingresar los valores y realizar las operaciones\n");
	                system("pause");
	            }
	            break;

	        case '5':
	            salir='s';
	            break;
	        }
	    }
	    while(salir=='n');
	return EXIT_SUCCESS;
}
