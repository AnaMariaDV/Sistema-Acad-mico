#ifndef LIB_H
#define LIB_H
struct pessoa
{
    int dia;
    int mes;
    int ano;
    int idade;
};
#include<stdio.h>
int calcula_idade(struct pessoa *p, int dia, int mes, int ano);


#endif /* LIB_H */