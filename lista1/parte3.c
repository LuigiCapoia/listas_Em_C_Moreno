#include <stdio.h>
#include <stdlib.h>
int main(){

int x,y,z,t,g;
x,y,z,t,g = 0;
 printf ("Informe o primeiro valor: ");
 scanf("%i",&x);

 printf ("Informe o segundo valor: ");
 scanf("%i",&y);

 printf ("Informe o terceiro valor: ");
 scanf("%i",&z);
 //ex:25
 //t =(y*x*z);
 //ex:26
 t = x + z;
 g = t * y;
 //printf ("O resultado da e: %i ",t);
 printf ("O resultado da e: %i ",g);
 system("Pause");

   return 0; 

}