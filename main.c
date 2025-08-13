#include"lib.h"
int main()
{
    struct pessoa Einstein, Newton;
    
        Einstein.dia=14;
        Einstein.mes=3;
        Einstein.ano=1879;
        
        Newton.dia=4;
        Newton.mes=1;
        Newton.ano=1647;

        Einstein.idade=calcula_idade(Einstein, 13, 8, 2025);
        Newton.idade=calcula_idade(Newton, 13, 8, 2025);
        
        printf("A idade de Einstein %d \n",Einstein.idade);
        printf("Idade de Newton %d \n ",Newton.idade);
        getchar();
        return 0;
}