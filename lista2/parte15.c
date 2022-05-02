#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    //ex16
    
    int n1,n2,x; 
    printf("Informe um valor: ");
    scanf("%d",&n1);
    fflush(stdin);
    do{
    	printf("Informe outro valor: ");
    	scanf("%d",&n2);
	}
    while (n2<=n1);
    for(x=n1;x>=n2;x++);
     printf(" Sequencia: %d\n",x);
     fflush(stdin);
    system("PAUSE");
    return(0);	
}