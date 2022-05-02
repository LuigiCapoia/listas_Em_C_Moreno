#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <time.h> 
#include <conio.h>
#include <windows.h> 
#include <locale.h> 
 
char jogador[20]; 


enum
{
    KEY_ESC     = 27,
    KEY_ENTER     = 13,
    ARROW_UP    = 256 + 72,
    ARROW_DOWN  = 256 + 80,
    ARROW_LEFT  = 256 + 75,
    ARROW_RIGHT = 256 + 77
};

char menus[5][1000] = {
	"Jogar cobrinha",
	"Ver recordes",
	"Como jogar?",
	"Sair do jogo"};


static int get_code(void);
void comoJogar(void);
void jogarCobrinha(int nivel);
void verRecordes(void);
void generateMenu(int choice);
void generateMenu(int choice){
	int count;
	printf("\n\n\n");
	for (count=0;count<4;count++){
		if(choice==count){
        	printf ("\t[*] %s\n",menus[count]);
		}else{
        	printf ("\t[ ] %s\n",menus[count]);
		}
	}


    SMALL_RECT windowSize = {0 , 0 , 39 , 12};
    SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);


    int ch;
    while (( ch = get_code()) != KEY_ESC ){
        switch (ch)
        {
        case ARROW_UP:
            system("cls");
            if(choice>0){
            	choice=choice-1;
            }
            generateMenu(choice);
            break;
        case ARROW_DOWN:
            system("cls");
            if(choice<3){
            	choice=choice+1;
            }
            generateMenu(choice);
            break;
        case ARROW_LEFT:
            printf("LEFT\n");
            break;
        case ARROW_RIGHT:
            printf("RIGHT\n");
            break;
        case KEY_ENTER:
        	switch(choice){
        		case 0:
        			
        			jogarCobrinha(1);
        			break;
        		case 1:
        			
        			verRecordes();
        			break;
        		case 2:
        			
        			comoJogar();
        			break;
        		case 3:
        			
        			printf("saindo....");
        			exit(0);
        			break;

        	}
        	break;
        }
    }	   
}


void irColunaLinha(int coluna, int linha)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD) {
        coluna,linha
    });
}

void carregarJogo(){
	system("cls");
	printf("Nome do jogador?\n");
	scanf("%[^\n]s", &jogador);
	system("cls");
	printf("Aguarde o jogo ser carregado...\n");
	char load[11] = "carregando";
	for (int i = 0; i < 11; ++i)
	{
		printf("%c ",load[i]);
		Sleep(((rand() % 100) + 350));
	}
	printf("...\nCarregamento concluido\n");
	sleep(1);
	printf("Iniciando...");
	system("cls");
}
void mostrarLimitesMatriz(void){

	system("cls");
	int matriz[12][39];


	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 39; ++j)
		{
			if((j==0) || (i==0) || (i==11) || (j==38)){
				printf("+");
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
	}	
}
void mostrarGameOver(int pontos){

	FILE *arquivo = fopen("recordes.txt", "a"); 

	if(arquivo!=NULL){
		fprintf(arquivo, "\n %03dP - %s", pontos,jogador);
		fclose(arquivo);
	}else{
		printf("Nenhum recorde registrado!\n");
	}



	Sleep(600);
	mostrarLimitesMatriz();
	irColunaLinha(4,4);
	printf("==============================");
	irColunaLinha(10,5);
	printf("G A M E  O V E R");
	irColunaLinha(4,6);
	printf("==============================");
	getch();
	system("cls");
	generateMenu(0);	
}
void jogarCobrinha(int nivel){
	int cobraPosicaoX[38*13] = {}; 
	int cobraPosicaoY[13*38] = {}; 
	int PontoPosicaoX,PontoPosicaoY; 
	int i, tamanhoCobra = 15;
	int pontos = 1; 
	int ch; 
	int velocidade = 300;  
	char teclou; 
	carregarJogo();
	mostrarLimitesMatriz();

	
    PontoPosicaoX=(rand()%37)+1;
    PontoPosicaoY=(rand()%10)+1;	

    // Mostrar informações
    irColunaLinha(0,12);
    printf("Precisone alguma tecla para iniciar...");

   
    cobraPosicaoX[0] = (rand()%37)+1;
    cobraPosicaoY[0] = (rand()%10)+1;
    irColunaLinha(cobraPosicaoX[0],cobraPosicaoY[0]);
    printf("%c",'H'); 

    ch = get_code();
 	while (ch != KEY_ESC ){
 		
 		
 		for (int i = 0; i < 37; ++i)
 		{
 			irColunaLinha(i,12);
 			printf(" ");
 		}

        
        if(
        	(cobraPosicaoY[0]==0)||
        	(cobraPosicaoY[0]==12)||
        	(cobraPosicaoX[0]==0)||
        	(cobraPosicaoX[0]==38)
        	)
        {
        	mostrarGameOver(pontos);
        } 		

 	
		for(i=tamanhoCobra; i>0; i--){   
        	cobraPosicaoX[i]=cobraPosicaoX[i-1];
            cobraPosicaoY[i]=cobraPosicaoY[i-1];
        }   
   
       	
        irColunaLinha(cobraPosicaoX[tamanhoCobra],cobraPosicaoY[tamanhoCobra]);
        printf(" "); 

        if(kbhit()){
        	
        	ch = get_code();        
        }

        
        switch ((int) ch){
	        case ARROW_UP:
	        	cobraPosicaoY[0]--;
	            break;
	        case ARROW_DOWN:
	        	cobraPosicaoY[0]++;
	            break;
	        case ARROW_LEFT:
	        	cobraPosicaoX[0]--;
	            break;
	        case ARROW_RIGHT:
	        	cobraPosicaoX[0]++;
	            break;
            default:
            	ch = get_code();
            	break;
        }

    

        
        if(PontoPosicaoX==cobraPosicaoX[0]&&PontoPosicaoY==cobraPosicaoY[0]){   
    		tamanhoCobra++; 
            pontos++; 
            PontoPosicaoX=(rand()%37)+1;
            PontoPosicaoY=(rand()%10)+1;
        }        

      
        irColunaLinha(cobraPosicaoX[0],cobraPosicaoY[0]);
        printf("%c",'H'); 

	    irColunaLinha(0,12);
	    printf("Pontos: %d - %s", pontos,jogador);      

        Sleep(300);
       
        for(i=1; i<tamanhoCobra; i++) {
            if(cobraPosicaoX[0]==cobraPosicaoX[i]&&cobraPosicaoY[0]==cobraPosicaoY[i]){
				mostrarGameOver(pontos);
            }
        }



       
        irColunaLinha(PontoPosicaoX,PontoPosicaoY);
        printf("%c",'c');
    }	

	getch();
	system("cls");
	generateMenu(0);		
}

void verRecordes(void){
	system("cls");
	char texto_str[20];
	FILE *arquivo = fopen("recordes.txt", "r");

	if(arquivo!=NULL){
		printf("Listando:\n");
		while(fgets(texto_str, 20, arquivo) != NULL){
			printf("%s", texto_str);
		}

		fclose(arquivo);
	}else{
		printf("Nenhum recorde registrado!\n");
	}

	getch();
	system("cls");
	generateMenu(1);	
}

void comoJogar(void){
	system("cls");
	printf("Utilize as setinhas para jogar\n");
	getch();
	system("cls");
	generateMenu(2);
}
static int get_code(void)
{
    int ch = getch();
    if (ch == 0 || ch == 224)
        ch = 256 + getch();
    return ch;
}

int main(int argc, char const *argv[])
{
	time_t t;
	srand((unsigned) time(&t));	
	setlocale(LC_ALL,"");
	generateMenu(0);
	return 0;
}