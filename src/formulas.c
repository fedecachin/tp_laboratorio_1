/*
 * formulas.c
 *
 *  Created on: 17 abr. 2021
 *      Author: pfede
 */

#include "formulas.h"

int suma(int a, int b)
{
    return a+b;
}


int resta(int a, int b)
{
    return a-b;
}

float division(int a, int b)
{
    return (float) a/b;
}


int multiplicacion(int a, int b)
{
    return a*b;
}

int factorial(int a)
{
    int resultado=1;
    if(a!=0)
    {
        for(int i=1; i<=a; i++)
        {
            resultado *= i;
        }
    }
    return resultado;
}

