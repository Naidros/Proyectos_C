#include <stdio.h>

/*SE INICIALIZA F(0)=0, F(1)=1*/

/*LA FORMULA ES F(i)=F(i-1)+F(i-2)*/
/*LA i REPRESENTA LAS ITERACIONES EJ*/
/*SI ESCOGO i=5, TENGO QUE ITERAR A PARTIR DE 2*/
/*SI F(2)=3*/
/*ENTONCES EN F(3) TENGO QUE EVALUAR*/
/*F(3)=F(2)+F(1) */
/*F(3)=3+1=4*/

/*Y ASÍ SUCESIVAMENTE*/

long Fibonacci(int n)
{
    /*Inicializo Total = 1 para añadirle el valor de F(1)=1*/
    long Total =1;
    long Fnueva =1, Fvieja =0;
    long Feval=0;
    if (n <=1) /*SI MI N = 1 || 0, REGRESA EL MISMO VALOR, EN CASO CONTRARIO...*/
    {
        return n;
    }
    else
    {
        /*COMIENZO A EVALUAR CON MI FNUEVA INICIAL Y MI FVIEJA INICIAL*/
    for (int i=1;i<n;i++)
    {
        /*F(2)=F(1)+F(0)*/
        /*F(2)=1+0 =1*/
        /*F(3)=F(2)+F(1)*/

        Feval = Fnueva + Fvieja;
        Fvieja = Fnueva;
        Fnueva = Feval;
        Total = Feval+ Total;
    }
        return (Total);
    }
}

int main()
{
    printf("El total es %ld",Fibonacci(20));
}