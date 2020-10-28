#include <stdlib.h>
#include <stdio.h>


 int main ()
 {

int num1,part;
  printf ("Ingrese un numero ");
   scanf ("%d",&num1);
   system ("cls");
   printf ("La octava parte es %d",calculo_OctavaParte( num1,part));

     return 0;
 }
 int calculo_OctavaParte(int  nume1 )
 {

  int part;
   part=nume1/8;

   return part;


 }
