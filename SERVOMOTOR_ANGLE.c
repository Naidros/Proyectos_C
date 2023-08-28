#include<stdio.h>
/*#include <stdlib.h>*/


/*CREO UNA FUNCIÓN PARA EVALUAR EL CARACTER DE LA LISTA. (YA SE POSICION 1,2 o 3)*/
int entero(char x, int incremento)
{
    int y = 0;

    switch (x)
    {
        case '1':
            y = 1 * incremento;
            break;
        case '2':
            y = 2 * incremento;
            break;
        case '3':
            y = 3 * incremento;
            break;
        case '4':
            y = 4 * incremento;
            break;
        case '5':
            y = 5 * incremento;
            break;
        case '6':
            y = 6 * incremento;
            break;
        case '7':
            y = 7 * incremento;
            break;
        case '8':
            y = 8 * incremento;
            break;
        case '9':
            y = 9 * incremento;
            break;
        default:
            break;
    }

    return y;
}

/*LA SIGUIENTE FUNCIÓN EVALUA LAS 3 POSICIONES Y SEGMENTA SI SOLO TIENE UN CARACTER (UNIDAD),DOS(DECENA Y UNIDAD) 
O TRES (CENTENA,DECENA Y UNIDAD)*/
/*TRABAJA EN CONJUNTO DE LA FUNCIÓN ANTERIOR*/


int chartoint (char pos1,char pos2,char pos3)
{
    int valor1=0, valor2=0, valor3=0,suma=0;
    if (pos3 == '\0' && pos2!='\0')
    {
        valor1=entero(pos1,10);
        valor2=entero(pos2,1);
        suma = valor1+valor2;
    }
    else if (pos3=='\0'&& pos2=='\0')
    {
        suma=entero(pos1,1);
    }
    else
    {
        valor1=entero(pos1,100);
        valor2=entero(pos2,10);
        valor3=entero(pos3,1);
        suma=valor1+valor2+valor3;
    }

    return suma;
}

int main ()
{
    /*DEFINIMOS LA LISTA PARA EL INPUT*/
    char cadena[5]="D201";

    /*DEFINIMOS LA LISTA, INCLUIMOS EL CARACTER NULO. (DARÁ FIN A LA LISTA)*/
    char lista[3];

    int angulo=0;

    for (int i=1; i<=3;i++)
    {
        //D180, D[0],1[1],8[2],0[3],'\0'[4]
        //COMO INICIALIZAMOS i = 1, EMPEZARÁ EN LA POSICIÓN 1 HASTA LA 3


        //GUARDA LOS CARACTERES 1->3 EN OTRA LISTA
        lista[i-1]=cadena[i];

    }

    /*AL  ACABAR EL FOR CON LOS DATOS QUE QUEREMOS, AÑADIMOS EL CARACTER FINAL EN LA POSICIÓN 3*/
    lista[3] = '\0'; // Agregamos el carácter nulo al final

    printf("%s \n",lista);

    /*EN CASO DE QUERER USAR LA LIBRERÍA STLIB, DESCOMENTAR ESTA FUNCIÓN*/
    /*angulo= atoi(lista);*/

    angulo = chartoint(lista[0],lista[1],lista[2]);

    printf("El angulo a girar es de: %d° ", angulo);

    return 0;



}
