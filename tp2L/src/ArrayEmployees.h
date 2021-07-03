/*
 * ArratEmployees.h
 *
 *  Created on: 15 may. 2021
 *      Author: pfede
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

} typedef Employee;



#endif /* ARRAYEMPLOYEES_H_ */

int initEmployees(Employee* list, int len);

int addEmployee(Employee list[], int len, int* id, char name[],char lastName[],float salary,int sector);

int buscarLibre(Employee list[], int len);

int findEmployeeById(Employee* list, int len,int id);

int removeEmployee(Employee* list, int len, int id);

int printEmployees(Employee* list, int length);

void printEmployee(Employee empleado);

int sortEmployees(Employee* list, int len, int order);

int arrayLetras(char array[]);

int modificarEmpleado(Employee lista[], int tam);

int menu();
