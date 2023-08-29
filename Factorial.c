#include <stdio.h>

void FuncionFactorial (int numero)
{
    double memoria =1;
    printf("ITERACION\t\tOPERACION\t\tRESULTADO\t\t\n\r");
    for (int i=1;i<=numero;i++)
    {
        printf("%d\t\t\t%0.lf*%d\t\t\t%.0lf\t\t\n\r",i,memoria,i,(memoria*i));
        memoria = i*memoria;
    }
}

int main()
{
    int factorial=0;
    printf("Escoga el numbero a analizar: ");
    scanf("%d",&factorial);

    FuncionFactorial(factorial);




    return 0;
}