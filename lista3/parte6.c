#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
// ex:11
//  int main()
//  {
//  char nome1[11];
//  int x,y;
//  printf("Escreva uma frase com menos de 5 a 10 caracteres: ",nome1);
//  gets(nome1);
//  fflush(stdin);
//  for (x=0; x<strlen (nome1); x++){

// printf("%i\n",nome1[x]);
// }
// system("pause");
//     return 0;
// }

// ex:12
//  int main()
//  {
//  char nome1[11];
//  int x,y;
//  printf("Escreva uma frase com menos de 3 a 20 caracteres: ",nome1);
//  gets(nome1);
//  fflush(stdin);
//  for (x=0; x<strlen (nome1); x++){

// printf("%i\n",nome1[x]+10);
// }
// system("pause");
//     return 0;
// }

//ex:13
 int main()
 {
 char nome1[11];
 int x,y;
 printf("Escreva uma frase com menos de 4 a 12 caracteres: ",nome1);
 gets(nome1);
 fflush(stdin);
 for (x=0; x<strlen (nome1); x++){

printf("%i\n",nome1[x]+20);
}
system("pause");
    return 0;
}