#include "lib.h"


int calcula_idade(struct pessoa *p, int dia, int mes, int ano)
{

    int idade;
    if (ano<p->ano)
    {
        printf("Erro!");
    }else 
    if(mes>=p->mes&& dia>=p->dia)
    {
    idade= ano-p->ano;
    }else
    if (mes=p->mes && dia<p->dia)
    {
        idade= ano-p->ano+1;
    }
    getchar();

   return idade; 
}
