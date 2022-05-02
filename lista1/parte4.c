#include <stdio.h>
#include <stdlib.h>
int main(){
 float r,q,e;
 r,q,e=0;
 printf ("Informe o primeiro valor: ");
 scanf("%f",&q);

 printf ("Informe o segundo valor: ");
 scanf("%f",&e);
 //ex:27
 //  r=(q-e);
 //  printf ("a subitracao deu:%.10f ",r);
 //  system("Pause");
 
 //ex:28
q=(q-e);
 printf ("a subitracao deu:%.10f ",q);
   system("Pause");
 
   return 0; 

}