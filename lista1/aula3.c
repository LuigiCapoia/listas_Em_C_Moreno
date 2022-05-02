#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // setlocale(LC_ALL,"portuguese");
    char nome[50];
    printf("Qual é seu nome? ");
    gets(nome); // string

    fflush(stdin); // limpar o bufer

    printf("%s\n\n", nome);
    system("pause");

    // const int nro = 5;ou lá em cima #define NRO 5;
    //{= recebe}{== igual};
    // soma+/divisao/ /mult*/sub-/ resto%;
    // incrementar y++ ou ++y/--y ou y--;
    // diferente !=/ igual==/menor i <=/menor </maior >/maior >=;
    // resultado 0 =  falsa/ resultado 1 = verdadeiro;
    //&& -operedor "e"
    //|| -operador "ou"
    // #include<locale.h>;
    // setlocale(LC_ALL,"portuguese");não funciona em vs
    // condição se == (if)
    // if (x>0){}
    // else == senão
    // switch == escolha
    // switch(variavel){case 1:/case 2:}break;
    // o break tem que vir depois de todo case
    //default:   ; caso não entre nos case

    return 0;
}