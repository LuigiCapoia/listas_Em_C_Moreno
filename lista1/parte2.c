#include <stdio.h>
#include <stdlib.h>
int main(){
float r,q,e,d,y,u,t;
r,q,e,d,y,u,t =0;

//ex:23
//  printf ("\t\t\tMedia de notas\n");

// printf ("informe a primeira nota: ");
// scanf("%f",&q);

// printf ("informe a segunda nota: ");
// scanf("%f",&e);

// printf ("informe a terceira nota: ");
// scanf("%f",&r);

// d = (q + r +e) /3;

// printf ("A media das notas e de: %.2f",d);
// system("Pause");

//ex:24
printf ("\t\t\tSoma de notas\n");
printf ("informe a primeira nota: ");
 scanf("%f",&q);

 printf ("informe a segunda nota: ");
 scanf("%f",&e);

 printf ("informe a terceira nota: ");
 scanf("%f",&r);

 printf ("informe a quarta nota: ");
 scanf("%f",&y);

 printf ("informe a quinta nota: ");
 scanf("%f",&u);

 printf ("informe a sexta nota: ");
 scanf("%f",&t);

 d = (q + r + e + y + u + t);

  printf ("A soma das notas e de: %.2f",d);
  system("Pause");
return 0;
}