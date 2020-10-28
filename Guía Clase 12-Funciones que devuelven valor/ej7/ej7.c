#include <stdlib.h>
#include <stdio.h>

 int main ()
 {
     int num1,num2;
       printf ("Ingrese un numero ");
    scanf ("%d",&num1);
     printf ("Ingrese otro numero ");
    scanf ("%d",&num2);
      if (num1==num2)
    {
        printf ("Son iguales");
    }
    else
    {
            printf ("El mayor es %d",MayorDeDosNumeros(num1,num2));
        }


     return 0;
 }
 int MayorDeDosNumeros (int nume1,int nume2)
 {
int N_mayor;




        if (nume1>nume2)
        {
            N_mayor=nume1;
        }
        else
{

        N_mayor=nume2;
    }
    return N_mayor;

 }
