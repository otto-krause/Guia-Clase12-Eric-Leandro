#include <stdlib.h>
#include <stdio.h>

 int main ()
 {
     int r1,r2,r3,r4,r5;
      printf ("Ingrese el valor de cinco resistencias \n ");
     scanf ("\n%d",&r1);
     scanf ("\n%d",&r2);
     scanf ("\n%d",&r3);
     scanf ("\n%d",&r4);
     scanf ("\n%d",&r5);
     system ("cls");
      printf("Las resistencias ingresadas son: %d ,%d , %d ,%d y %d",r1,r2,r3,r4,r5);
      printf( "\n La resistencia total es %d",calculo_Resistencia(r1,r2,r3,r4,r5));
     return 0;
 }
 int calculo_Resistencia(int r1,int r2,int r3,int r4,int r5,int rt)
 {

     rt=r1+r2+r3+r4+r5;

   return rt;

 }
