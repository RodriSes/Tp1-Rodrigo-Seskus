#include "stdio.h"
#include <stdlib.h>
#include "funciones.h"

int main()
{
    system("title § TU TIA §");
    system("color 09");
    system("mode con: cols=50 lines=26");
    char seguir='s';
    int opcion=0;
    float n1 = 0 , n2 = 0 , res;
    while(seguir=='s')
    {
        system("cls");
        printf("\n\tX=%.f\tY=%.f\n\n",n1,n2);
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("ingrese un numero: ");
                scanf("%f",&n1);
                system("pause");
                break;
            case 2:
                printf("ingrese un numero: ");
                scanf("%f",&n2);
                system("pause");
                break;
            case 3:
                res = suma (n1,n2);
                printf("La suma es: %.2f\n",res);
                system("pause");
                break;
            case 4:
                res = resta (n1,n2);
                printf("La resta es: %.2f\n",res);
                system("pause");
                break;
            case 5:
                 if(n2<0)
                {printf("\n\nError. El diviso no puede ser menor que 0\n\n");}
                else
                {res = divicion (n1,n2);
                printf("la divicion es %.2f\n",res);}
                system("pause");
                break;
            case 6:
                res = multi(n1,n2);
                printf("La multiplicacion es: %.2f\n",res);
                system("pause");

                break;
            case 7:
                 if(n1<0)
                {printf("\n\nError. El numero no puede ser menor que 0\n\n");}
                else
                {factorial("El factoreo de 'X' es:  ",n1);
                }
                system("pause");
                break;

            case 8:
                res= todaslasfunciones(n1,n2);
                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}
