#include <stdio.h>
#include <string.h> /* Librería necesaria para trabajar con cadenas de caracteres (Strings)*/

int multiplicacion (int numero,int multiplicador)
{
    int suma =0;
    suma =  numero*multiplicador;

    return suma;
}

int multiplicador(int multi)
{
    int multo=0;
    switch (multi)
    {
    case 0:
        multo =1;
        break;
    case 1:
        multo =10;
        break;
    case 2:
        multo=100;
        break;
    case 3:
        multo=1000;
    break;
    case 4:
        multo = 10000;
    break;
    case 5:
        multo = 100000;
    break;
    case 6:
        multo =1000000;
    break;
    case 7:
        multo=10000000;
    break;
    case 8:
        multo = 100000000;
    break;
    case 9:
        multo = 10000000000;
    break;
    
    default:
        break;
    }
    return multo;
}

int main()
{
    int valor1=0,valor2=0,valor3=0,total=0;
    int porcentaje=0;

    /*Inicializo mi lista con casos*/
    int numeros[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int color1=0,color2=0,color3=0,tolerancia =0;
    
    /*Utiliza matrices con cadenas de caracteres para almacenar*/
    /*El formato [x][y] se utiliza para especificar que. Ej. [1][10], la posición 1,puede contener hasta 10 caracteres*/
    /*Entonces, tengo en total 10 colores, y cada uno de ellos puede almacenar hasta 10 caracteres*/
    char colores[10][11] = {"Negro", "Marron", "Rojo","Naranja","Amarillo","Verde","Azul","Violeta","Gris","Blanco"};

    char NombreTolerancia[6][15]={"Marron","Rojo","Dorado","Plateado","No tiene bandas"};
    int numtolerancias[6]={1,2,5,10,20};

    for (int i = 0; i <= 9; i++) /*Hago 9 iteraciones para todos los casos*/
    {
        printf("Ingrese %d si el color es %s \n\r", numeros[i], colores[i]);
    }

    printf("Ingrese el primer color: ");
    scanf("%d",&color1);

    printf("Ingrese el segundo color: ");
    scanf("%d",&color2);

    printf("Ingrese el tercer color: ");
    scanf("%d",&color3);

    printf("Ingrese la tolerancia: \n\r");
    for (int i=0;i<=4;i++)
    {
        printf("Ingrese %d si es color %s \n\r",numtolerancias[i],NombreTolerancia[i]);
    }

    scanf("%d",&tolerancia);


    valor1=multiplicacion(color1,10);
    valor2 =multiplicacion(color2,1);
    valor3 = multiplicador(color3);

    total=(valor1+valor2)*valor3;

    switch (tolerancia)
    {
    case 1:
        porcentaje = 1;
        break;

    case 2:
        porcentaje = 2;
        break;

    case 5:
        porcentaje = 5;
        break;
    case 10:
        porcentaje =10;
        break;
    
    default:
        break;
    }

    printf("el valor de la resistencia es %d ohms con una tolerancia del %d%%",total,porcentaje);



    return 0;
}
