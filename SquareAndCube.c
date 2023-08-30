#include <stdio.h>

/*Defino la función como double, con input de double*/
/*Dentro de las funciones, las variables tienen tiempo de vida*/
/*Y no afectan las otras variables*/
double FunctionSquareCube (double Numero)
{
    double square = 0;
    int iteraciones =0;

    /*Se caracterizó el incremento de iteraciones*/
    /* Ej, Si es coge 2, hay 10 iteraciones*/
    /* Si se escoge 3, hay 20 iteraciones, etc. Todas con un incremento de 10*/
    iteraciones = (10*Numero)-10;

    for (int i = 0;i<=iteraciones; i++)
    {
        /*Hago incrementos de 0.1 en 0.1 hasta n (1.0,1.1,1.2,1.3,etc...)*/
        square = 1+(i/10.0);
        printf("%.2lf\t\t%.3lf\t\t%.3lf \n\r",square,(square*square),(square*square*square));


    }
    return square;
}

int main()
{
    double numero =0;

    printf("Escoge un número para conocer su cuadrados y cubos con incrementos de 0.1: \n\r");
    scanf("%lf",&numero);
    FunctionSquareCube(numero);

}

