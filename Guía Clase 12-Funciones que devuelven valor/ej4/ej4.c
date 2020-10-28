#include <stdlib.h>
#include <stdio.h>
float calculo_Presion ( );
 int main ()
 {
     int num1,num2;
       printf ("Ingrese la fuerza ");
    scanf ("%d",&num1);
    printf ("Ingrese la superficie ");
    scanf ("%d",&num2);
    system ("cls");
     printf ("La presion es %.2f",calculo_Presion ( num1, num2));

     return 0;
 }
 float calculo_Presion (int nume1,int nume2)
 {
     float p;


    p=nume1/nume2;
  return p;
 }
