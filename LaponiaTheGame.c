/*  
André Luis Pires Wenceslau Soares
Antonio Horacio Rodrigues de Magalhaes
Arley Silva Mendes de Matos
Matheus Sá Cardoso
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

char tabuleiro[12][12];
char nome1[20];
char nome2[20];
char primeiro[20];
char segundo[20];
char mover;
int qnt1, qnt2, Cv, Cp;
//qnt1 = vento ; qnt2 = pedra


void vento(){
system("cls");
printf("                                       \n");
printf("       :*=@@@#=*-                      \n");
printf("    =WW#:        :*@=..-*@WWWWWW@+     \n");
printf("  +WW:   +==*:.      .#W+       +@W#   \n");
printf(" :WW-.:WW=++*@W=     @#..*W@@WW@- +WW- \n");
printf(" *W= :W=      -@#   *W-.#*     @W- +W# \n");
printf(" +W= :W=  ::@- +W-  :W=.:@*#   *W: -W# \n");
printf("  =W+ -@@=*@=  =#    *W#-     :W#  +W+ \n");
printf("   +W#-      -##       *WWWWWW@:  -W*  \n");
printf("     :#WW@WW@*-..+**+-           :W+   \n");
printf("      ::      =W*    :#@:       ##     \n");
printf("      :=    :W#  -#@#-  @#   -#*       \n");
printf("       W-   *W+  +-  =*  W+-           \n");
printf("       +@-  :W@      @=  W=            \n");
printf("        *W+..-@W#++#W#  =W+            \n");
printf("         -@W*   :++-  :@W*             \n");
printf("           :@WW@#**#@WW=               \n");
printf("              :=#@#=:                  \n");
}

void terra(){
system("cls");
printf("                  =@@@@@@@@@@@@@@@#-                 \n");
printf("                 =@#            -@@#                 \n");
printf("                *@@-             :@@#                \n"); 
printf("               :@@:  -#@@@@@@=-   *@@=               \n");
printf("              -@@+  =@:     -#@#-  #@@:              \n");
printf("              #@+  #*  -+*:   :@@- -@@@-             \n");
printf("             #@*  *@ -##+-:@+  *@*  +@@=             \n");
printf("            =@*  -@= +@: =@@*  #@-   =@@:            \n");
printf("           +@=   -@=  #@=-  -*@#-    :@@=            \n");
printf("          :@@     +@#-  :***+-        =@@:           \n");
printf("          #@+      -#@#:     -*@*     :@@#           \n");
printf("         =@=          -+=###=+-        =@@+          \n");
printf("        +@@-                           -@@@          \n");
printf("       -@@+  =@@@@@@@@@@@  @@@@@@@@@@@  *@@*         \n");
printf("       =@#            :@@  @+           -@@@-        \n");
printf("       #@*.@@@@@@@@@@@@@@  @@@@@@@@@@@@= #@@+        \n");
printf("       #@*             @@  @+            @@@*        \n");
printf("       #@@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@*        \n");
}

void inicio(){
printf("[¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬]\n");
printf("||                                                                                                                                  ||\n");
printf("||     ***** *               **                ***** **          * ***         ***** *     **            *****  *         **        ||\n");
printf("||  ******  *             *****             ******  ****       *  ****      ******  **    **** *      ******  *        *****        ||\n");
printf("|| **   *  *             *  ***            **   *  *  ***     *  *  ***    **   *  * **    ****      **   *  *        *  ***        ||\n");
printf("||*    *  *                 ***           *    *  *    ***   *  **   ***  *    *  *  **    * *      *    *  *            ***        ||\n");
printf("||    *  *                 *  **              *  *      **  *  ***    ***     *  *    **   *            *  *            *  **       ||\n");
printf("||   ** **                 *  **             ** **      ** **   **     **    ** **    **   *           ** **            *  **       ||\n");
printf("||   ** **                *    **            ** **      ** **   **     **    ** **     **  *           ** **           *    **      ||\n");
printf("||   ** **                *    **          **** **      *  **   **     **    ** **     **  *         **** **           *    **      ||\n");
printf("||   ** **               *      **        * *** **     *   **   **     **    ** **      ** *        * *** **          *      **     ||\n");	
printf("||   ** **               *********           ** *******    **   **     **    ** **      ** *           ** **          *********     ||\n");
printf("||   *  **              *        **          ** ******      **  **     **    *  **       ***      **   ** **         *        **    ||\n");
printf("||      *               *        **          ** **           ** *      *        *        ***     ***   *  *          *        **    ||\n");
printf("||  ****           *   *****      **         ** **            ***     *     ****          **      ***    *          *****      **   ||\n");
printf("|| *  *************   *   ****    ** *       ** **             *******     *  *****                ******          *   ****    ** * ||\n");
printf("||*     *********    *     **      **   **   ** **               ***      *     **                   ***          *     **      **  ||\n");
printf("||*                  *                 ***   *  *                         *                                       *                 ||\n");
printf("|| **                 **                ***    *                           **                                      **               ||\n");
printf("||                                       ******                                                                                     ||\n");
printf("||                                         ***                                                                                      ||\n");
printf("||                                                                                                                                  ||\n");
printf("||                                                                                          =@@@@@@@@@@@@@@@#-                      ||\n");
printf("||           :*=@@@#=*-                                                                    =@#            -@@#                      ||\n");
printf("||        =WW#:        :*@=  -*@WWWWWW@+                                                  *@@-             :@@#                     ||\n");
printf("||      +WW:  +==*:        #W+        +@W#                                               :@@:  -#@@@@@@=-   *@@=                    ||\n");
printf("||     :WW-  WW=++*@W=     @#  *W@@WW@- +WW- 	  **      **  ********	                -@@+  =@:     -#@#-  #@@:                   ||\n");
printf("||     *W=  W=    -@#   *W-.#*     @W-   +W#     /**     /** **////// 	                #@   #*  -+*:   :@@- -@@@-                  ||\n");
printf("||     +W=  W=    @-.+W-  :W= :@*#  *W:  -W# 	 /**     /**/**                        #@*  *@ -##+-:@+  *@*  +@@=                  ||\n");
printf("||      =W+ -@@=*@=  =#    *W#-     :W#  +W+     //**    ** /*********                =@*  -@  +@: =@@*  #@-   =@@:                 ||\n");
printf("||       +W#-      -##       *WWWWWW@   -W* 	  //**  **  ////////**               +@=   -@=  #@=-  -*@#-    :@@=                 ||\n");
printf("||         :#WW@WW@*-..+**+-           :W+       //****          /**	            :@@     +@#-   ***+-        =@@:                ||\n");
printf("||                   =W*    :#@:      ##    	    //**     ******** 	            #@+      -#@#      -*@*      @@#                ||\n");
printf("||          :=    :W#  -#@#-  @#   -#*      	     //     ////////  	           =@=          -+=###=+-        =@@+               ||\n");
printf("||           W-   *W+  +-  =*  W+-                                                +@@                             @@@               ||\n");
printf("||           +@   :W@      @=  W=                                                -@@+..=@@@@@@@@@@@.-@@@@@@@@@@@  *@@*              ||\n");
printf("||            *W   -@W#++#W#  =W+.                                               =@#             @@  @             @@@-             ||\n");
printf("||             -@W*   :++-  :@W*                                                 #@*.@@@@@@@@@@@@@@  @@@@@@@@@@@@=.#@@+             ||\n");
printf("||               :@WW@#**#@WW=                                                   #@*             @@  @             @@@*             ||\n");
printf("||                  :=#@#=:                                                      #@@@@@@@@@@@@@@@@@  @@@@@@@@@@@@@@@@@*             ||\n");
printf("||                                                                                                                                  ||\n");
printf("[¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬]\n");
}

void printMenu(){
int opcoes;
printf("Digite:\n1- NOVO JOGO\n2- COMO JOGAR?\n3- SAIR\n");
scanf ("%d", &opcoes);
  switch (opcoes){
    case 1:
      system("cls");
			printf ("NOVO JOGO\n");
      break;
      case 2:
        system("cls");
				printf ("COMO JOGAR?\n");
        printf("\t\t\t\t\t\t-----------Regras-----------\n");
        printf("1. O JOGO CONSISTE EM UM TABULEIRO DE TAMANHO 12X12, EM QUE SUAS BORDAS SÃO CORDILHEIRAS E NO MEIO É UM LAGO, SENDO ASSIM O SEU CAMPO DE BATALHA SERÁ REPRESENTADO POR UMA ÁREA DE 4X10, O QUAL TERÁ A SUA MAIS A DE SEU INIMIGO. DE INÍCIO, VOCÊ IRÁ POSICIONAR OS SEUS 8 GUERREIROS NO SEU CAMPO DE BATALHA (REPRESENTADOS PELOS NÚMEROS DE 1 OU 2) E MAIS UM GUERREIRO ESPECIAL(REPRESENTADOS PELO # OU @), OU SEJA, 9 GUERREIROS NO TOTAL. EM SEGUIDA, VOCÊ TERÁ 2 OPÇÕES: MOVIMENTAR OU ATACAR.\n\n");
        printf("2. SE A OPÇÃO FOR MOVIMENTAR, É NECESSÁRIO INFORMAR PARA QUAL CASA SE DESEJA IR: POR EXEMPLO, UM GUERREIRO EM UMA CASA 4,4, SÓ PODERIA IR PARA A DIREITA OU ESQUERDA, OU PARA TRÁS, VISTO QUE NA FRENTE DA SUA CASA 4,4 ESTÁ O LAGO. TAMBÉM NÃO É POSSÍVEL MOVIMENTAR POR CIMA DA CORDILHEIRA.\n\n");
        printf("3. SE A OPÇÃO FOR ATACAR E O ATAQUE VIER DE UM GUERREIRO NÚMERO 1, ELE SEMPRE É FRONTAL, SE FOR DE UM NÚMERO 2 ELE É NA DIAGONAL PARA ESQUERDA OU DIREITA, PORTANTO, SENDO UM GUERREIRO DE NÚMERO 2, O JOGADOR PRECISARÁ TAMBÉM DECIDIR SE DEVE ATACAR PARA DIREITA OU PARA ESQUERDA.\n\n");
        printf("4. OS GUERREIROS ESPECIAIS POSSUEM PODERES INCRÍVEIS,UM DELES É CAPAZ DE DESTRUIR UMA ÁREA 2X5 DO SEU INIMIGO E O OUTRO É CAPAZ DE ELIMINAR UMA LINHA INTEIRA, MAS ONDE OCORRERÁ ESSE ESPECIAL SERÁ SORTEADO. VALE RESSALTAR QUE SÓ PODERÁ SER USADO APENAS 2 VEZ.\n\n");
        printf("5. O JOGO FINALIZA QUANDO SOBRA APENAS 1 GUERREIRO EM UM DOS CAMPOS DE BATALHA!");
        printMenu();
        break;
      case 3:
				exit(0);
				printf ("SAIR\n");
        break;
      default:
      system("cls");
      printf("PREZADO... NÃO COMPLIQUE...!\n");
			printMenu();
      break;     
    }
}

void sorteio(char nome1[20],char nome2[20]){
    int numeroSorteado, i;
    
    srand(time(NULL));

        numeroSorteado = rand() % 2;
        if (numeroSorteado == 1){
            strcpy(primeiro, nome1);
            strcpy(segundo, nome2);
        }
        if(numeroSorteado == 0){
            strcpy(primeiro, nome2);
            strcpy(segundo, nome1);
        }
    printf("O PRIMEIRO A JOGAR É %s\n", primeiro);
    fflush(stdin);
}

void printmatriz(char matriz[12][12])
{
  int i, j;
  fflush(stdin);
  system("cls");
  printf("%s Vs %s\n", primeiro, segundo);
  printf("\n");
  for(i= 0;i < 12; i++){
     for(j= 0;j < 12; j++){
       printf("%c ", matriz[i][j]);
     }
     printf("\n");
  }
  printf("\n");
}

void scan_pedra (char mat[12][12], int local_linha, int local_coluna, int linha_limite , int coluna_limite){
int o,p, contp=0;
	for(o=local_linha; o<=linha_limite; o++){
	   	for(p=local_coluna; p<=coluna_limite; p++){
	    	if(mat[o][p]=='1' || mat[o][p]=='2' || mat[o][p]=='@'){
	   	  	mat[o][p]=' ';
	   	  	qnt1--;	
	   	  	Cp++;
	   	  	contp++;
	   	  	printf("O JOGADOR DA LINHA %d E COLUNA %d FOI ELIMINADO\n", o, p);
	   	  	sleep(2);
	    	}
	   	}
	}
	if (contp == 0){
		printf("NENHUM JOGADOR FOI ELIMINADO\n");
		sleep(2);
	}
	contp = 0;
}

void scan_vento (char mat[12][12], int o){
int p,contv=0;
	for(p=1; p<=10; p++){
	    if(mat[o][p]=='1' || mat[o][p]=='2' || mat[o][p]=='#'){
	   	  	mat[o][p]=' ';
	   	  	qnt2--;
	   	  	Cv++;
	   	  	contv++;
	   	  	printf("O JOGADOR DA LINHA %d E COLUNA %d FOI ELIMINADO!\n", o, p);
	   	  	sleep(2);
	    }
	}
	if (contv == 0){
		printf("NENHUM JOGADOR FOI ELIMINADO\n");
		sleep(2);
	}
	contv = 0;
}

int main(){
setlocale(LC_ALL, "Portuguese");
inicio();
printMenu();
	char tabuleiro[12][12]={
    {'*','*','*','*','*','*','*','*','*','*','*','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*','~','~','~','~','~','~','~','~','~','~','*'},
    {'*','~','~','~','~','~','~','~','~','~','~','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*','*','*','*','*','*','*','*','*','*','*','*'}
};

char name1[20],name2[20];
int i,j,x,y,n,p1,p2,p3,p4,andar, direcao; 
int quad_sort,num1=0, quadrante;
printf("DIGITE O NOME DO JOGADOR 1:\n");
scanf("%s", name1);
printf("DIGITE O NOME DO JOGADOR 2:\n");
scanf("%s", name2);
printf("-----------------------------------------------------------------------------------------------------------------------\n");
printf("-----------------------------------------------------------------------------------------------------------------------\n");
printf("BEM VINDOS USUÁRIOS, VOCÊS ESTÃO PRESTES A ENTRAR NO INCRÍVEL MUNDO DA LAPONIA,\n"); 
printf("ONDE VOCÊ TERÁ A OPORTUNIDADE DE PARTICIPAR DE UMA BATALHA ESPETACULAR E INSTIGANTE!\n");
printf("-----------------------------------------------------------------------------------------------------------------------\n");

printmatriz(tabuleiro);

printf("AGORA IREMOS ALOCAR CADA UM DOS SEUS GUERREIROS EM POSIÇÕES\n");
printf("GUERREIROS DE NÍVEL 1 PODEM ATACAR EM LINHA RETA, JÁ GUERREIROS DE NÍVEL 2 ATACAM NA DIAGONAL\n");
printf("-----------------------------------------------------------------------------------------------------------------------\n");
sorteio(name1, name2);

printmatriz(tabuleiro);


n=4;
while(n--){
printf("%s, DIGITE A POSIÇÃO DO GUERREIRO DE PODER 1, DIGITE VALORES APENAS ENTRE AS LINHAS 1 E 4, E AS COLUNAS 1 E 10\n", primeiro);
scanf("%d %d",&x,&y);
if(x<1 || x>4 || y<1 || y>10 || tabuleiro[x][y]!=' '){
	while(1){
		printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
		scanf("%d %d",&x,&y);
		if(4>=x && x>=1 && 10>=y && y>=1 && tabuleiro[x][y]==' '){
			tabuleiro[x][y]='1';
		break;
    }
	}
}
else{tabuleiro[x][y]='1';}
printf("%s, DIGITE A POSIÇÃO DO GUERREIRO DE PODER 1, DIGITE APENAS VALORES ENRE AS LINHAS 7 E 10, E AS COLUNAS 1 E 10\n", segundo);
scanf("%d %d",&x,&y);
if(x<7 || x>10 || y<1 || y>10 || tabuleiro[x][y]!=' '){
	while(1){
		printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
		scanf("%d %d",&x,&y);
		if(10>=x && x>=7 && 10>=y && y>=1 && tabuleiro[x][y]==' '){
			tabuleiro[x][y]='1';
		break;}
	}
}else{tabuleiro[x][y]='1';}

printmatriz(tabuleiro);
}
n=4;
printf("-----------------------------------------------------------------------------------------------------------------------\n");
printf("AGORA VAMOS AOS GUERREIROS DE PODER 2\n");
printf("-----------------------------------------------------------------------------------------------------------------------\n");
while(n--){
printf("%s, DIGITE A POSIÇÃO DO GUERREIRO DE PODER 2, DIGITE VALORES ENTRE AS LINHAS 1 E 4, E AS COLUNAS 1 E 1O\n", primeiro);
scanf("%d %d",&x,&y);
if(x<1 || x>4 || y<1 || y>10 || tabuleiro[x][y]!=' '){
	while(1){
		printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
		scanf("%d %d",&x,&y);
		if(4>=x && x>=1 && 10>=y && y>=1 && tabuleiro[x][y]==' '){
			tabuleiro[x][y]='2';
		break;
		}
	}
}else{tabuleiro[x][y]='2';}
printf("%s, DIGITE A POSIÇÃO DO GUERREIRO DE PODER 2, DIGITE VALORES ENTRE AS LINHAS 7 E 10, E AS COLUNAS 1 E 1O\n", segundo);
scanf("%d %d",&x,&y);
if(x<7 || x>10 || y<1 || y>10 || tabuleiro[x][y]!=' '){
	while(1){
		printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
		scanf("%d %d",&x,&y);
		if(10>=x && x>=7 && 10>=y && y>=1 && tabuleiro[x][y]==' '){
			tabuleiro[x][y]='2';
		break;
		}
	}
	}else{tabuleiro[x][y]='2';}

printmatriz(tabuleiro);
}	

printf("-----------------------------------------------------------------------------------------------------------------------\n");
printf("PRESTE ATENÇÃO!!! AGORA VAMOS AOS GUERREIROS ESPECIAIS\n");
printf("-----------------------------------------------------------------------------------------------------------------------\n");
printf("ESTES POSSUEM HABILIDADES CATASTRÓFICAS\n");
printf("-----------------------------------------------------------------------------------------------------------------------\n");
printf("%s DIGITE A POSIÇÃO DO SEU GUERREIRO ESPECIAL, DIGITE OS VALORES  APENAS ENTRE AS LINHAS 1 E 4, E AS COLUNAS 1 E 10\n", primeiro);
scanf("%d %d",&x,&y);
if(x<1 || x>4 || y<1 || y>10 || tabuleiro[x][y]!=' '){
	while(1){
		printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
		scanf("%d %d",&x,&y);
		if(4>=x && x>=1 && 10>=y && y>=1 && tabuleiro[x][y]==' '){
		tabuleiro[x][y]='@';	
		break;}

  printmatriz(tabuleiro);
	}
}else{tabuleiro[x][y]='@';}
printf("%s DIGITE A POSIÇÃO DO SEU GUERREIRO ESPECIAL, DIGITE VALORES APENAS ENTRE AS LINHAS 7 E 10, E AS COLUNAS 1 E 10\n", segundo);
scanf("%d %d",&x,&y);
if(x<7 || x>10 || y<1 || y>10 || tabuleiro[x][y]!=' '){
	while(1){
		printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
		scanf("%d %d",&x,&y);
		if(10>=x && x>=7 && 10>=y && y>=1 && tabuleiro[x][y]==' '){
			tabuleiro[x][y]='#';
		break;}
  
  printmatriz(tabuleiro);
	}
}else{tabuleiro[x][y]='#';}
printf("-----------------------------------------------------------------------------------------------------------------------\n");
printmatriz(tabuleiro);
printf("-----------------------------------------------------------------------------------------------------------------------\n");

/* MOVIMENTOS DE ATAQUE,INICIO DA BATALHA*/

printf("AGORA IREMOS INICIAR A GRANDE DISPUTA PELA TERRA DA LAPONIA\n");
qnt1=9;
qnt2=9;
Cp = 0;
Cv = 0;
printf("qnt1 = %d e qnt2 = %d\n",qnt1, qnt2);

while(qnt1!=0 && qnt2!=0){
	/* JOGADOR 1*/
	printf("%s DIGITE 1 SE DESEJA MOVER OU 2 SE DESEJA ATACAR UMA PEÇA.\n", primeiro);
	scanf("%d", &andar);
	if(andar>2 || andar<1){
		while(1){
		printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
		scanf("%d", &andar);
		if(andar<=2 && andar>=1){break;
		}	
		}
	}
	/* MOVIMENTAÇÃO*/
	if(andar==1){
	printf("DIGITE A POSIÇÃO DA PEÇA E PARA ONDE DESEJA MOVE-LA\n");
		scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
		if(p1<1 || p1>4 || p2<1 || p2>10 || tabuleiro[p1][p2]==' ' || tabuleiro[p3][p4]!=' ' || abs(p1-p3)>1 || abs(p2-p4)>1 ){
			while(1){
				printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
				scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
				if(4>=p1 && p1>=1 && 10>=p2 && p2>=1 && tabuleiro[p1][p2] !=' ' && tabuleiro[p3][p4] ==' ' && abs(p1-p3)==1 && abs(p2-p4)==1){
					tabuleiro[p3][p4]=tabuleiro[p1][p2];
					tabuleiro[p1][p2]=' ';
				break;}
			printmatriz(tabuleiro);	
			}
		} else{
		tabuleiro[p3][p4]=tabuleiro[p1][p2];
		tabuleiro[p1][p2]=' ';
		}
	printmatriz(tabuleiro);	
	}
	/* ATAQUE*/
	else if(andar==2){
		printf("DIGITE QUAL A PEÇA DESEJA UTILIZAR PARA O ATAQUE\n");
		scanf("%d %d",&p3,&p4);
			if(p3>7 || tabuleiro[p3][p4]==' ' || tabuleiro[p3][p4]=='~'){
				while(1){
					printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
					scanf("%d %d",&p3,&p4);
					if(tabuleiro[p3][p4]=='1' || tabuleiro[p3][p4]=='2' || tabuleiro[p3][p4]=='@' ){
					break;
					}
				}
			}
			if(tabuleiro[p3][p4]=='1'){
				/* RETO NORTE*/
				p3=p3+1;
				for(i=p3;i<12;i++){
				   	if(i>=7){
						if(tabuleiro[i][p4]=='1' || tabuleiro[i][p4]=='2' || tabuleiro[i][p4]=='#'){
							tabuleiro[i][p4]=' ';
							printf("O GUERREIRO NA POSIÇÃO %d %d FOI ELIMINADO\n",i,p4);
							sleep(2);
							printmatriz(tabuleiro);
							qnt2--;
							break;
							}
			   			}
					}
					printmatriz(tabuleiro);	
				}

		else if(tabuleiro[p3][p4]=='2'){
			printf("SELECIONE QUAL DIREÇÃO ATACAR (1- DIAGONAL ESQUERDA, 2- DIAGONAL DIREITA)\n");
			scanf("%d",&direcao);

	/* DIAGONAL ESQUERDA*/
			if(direcao == 1){
				p3=p3+1;
				p4=p4+1;
				for(i=p3;i<12;i++){
			   		if(i>=7){
			   			if(tabuleiro[i][p4]=='1' || tabuleiro[i][p4]=='2' || tabuleiro[i][p4]=='#'){
			   				tabuleiro[i][p4]=' ';
			   				printf("O GUERREIRO NA POSIÇÃO %d %d FOI ELIMINADO\n",i,p4);
			   				sleep(2);
							printmatriz(tabuleiro);
							qnt2--;
			   				break;
			   			} 
			   		}
			   		p4=p4+1;
				}
			}
	/* DIAGONAL DIREITA*/
			else if(direcao==2){
				printmatriz(tabuleiro);
				p3=p3+1;
				p4=p4-1;
					for(i=p3;i<12;i++){
						if(i>=7){
			   				if(tabuleiro[i][p4]=='1' || tabuleiro[i][p4]=='2' || tabuleiro[i][p4]=='#'){
			   					tabuleiro[i][p4]=' ';
			   					printf("O GUERREIRO NA POSIÇÃO %d %d FOI ELIMINADO\n",i,p4);
			   					sleep(2);
								printmatriz(tabuleiro);
								qnt2--;
			   					break;
			   				}
			   			}
			   		p4=p4-1;
					}
				printmatriz(tabuleiro);
			}    
		}
		else if(tabuleiro[p3][p4]=='@' && Cv<=2){
					int quad_sort,num1=0;
						srand(time(NULL)); //gera um numero aleatorio
						do{
							quad_sort=rand() % 5; // Vai gerar o numero entre 0 e 3
						}
						while(quad_sort==num1); //sortea até que o "a" não seja um número que eu defini
						quadrante=quad_sort;
						switch (quadrante){
					  	case 1: 
					  		scan_vento(tabuleiro,7);
					  		break;
					  	case 2: 
							scan_vento(tabuleiro,8);
							break;
						case 3:
							scan_vento(tabuleiro,9);
							break;
					  	case 4:
							scan_vento(tabuleiro,10);
					    break;
					    }
					printmatriz(tabuleiro);	
			}
			printf("qnt1 = %d e qnt2 = %d\n",qnt1, qnt2);
		}
	//JOGADOR 2
	printf("%s DIGITE 1 SE DESEJA MOVER OU 2 SE DESEJA ATACAR UMA PEÇA.\n", segundo);
	scanf("%d", &andar);
		if(andar>2 || andar<1){
		while(1){
		printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
		scanf("%d", &andar);
		if(andar<=2 && andar>=1){break;
		}	
		}
	}
		/* MOVIMENTAÇÃO*/
	if(andar==1){
				printf("DIGITE A POSIÇÃO DA PEÇA E PARA ONDE DESEJA MOVE-LA\n");
				scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
				if(p1<7 || p1>10 || p2<1 || p2>10 || tabuleiro[p1][p2]==' '|| tabuleiro[p3][p4]!=' ' || abs(p1-p3)>1 || abs(p2-p4)>1 ){
					while(1){
						printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
						scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
						if(10>=p1 && p1>=7 && 10>=p2 && p2>=1 && tabuleiro[p1][p2]!=' ' && tabuleiro[p3][p4]==' ' && abs(p1-p3)==1 && abs(p2-p4)==1){
							tabuleiro[p3][p4]=tabuleiro[p1][p2];
							tabuleiro[p1][p2]=' ';
							break;}
						printmatriz(tabuleiro);	
					}
				} else{
					tabuleiro[p3][p4]=tabuleiro[p1][p2];
					tabuleiro[p1][p2]=' ';
				}
		printmatriz(tabuleiro);	
		}
		else if (andar==2){
			printf("DIGITE QUAL A PEÇA VOCÊ DESEJA UTILIZAR PARA O ATAQUE\n");
			scanf("%d %d",&p3,&p4);
			if(p3<7 || tabuleiro[p3][p4]==' ' || tabuleiro[p3][p4]=='~'){
				while(1){
					printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
					scanf("%d %d",&p3,&p4);
					if(tabuleiro[p3][p4]=='1' || tabuleiro[p3][p4]=='2' || tabuleiro[p3][p4]=='#' ){
					break;
					}
				}
			}
			/* RETO SUL*/
		    else if(tabuleiro[p3][p4]=='1'){	
				p3=p3-1;
				for(i=p3;i>0;i--){
					if(i<=4){
					   	if(tabuleiro[i][p4]=='1' || tabuleiro[i][p4]=='2' || tabuleiro[i][p4]=='@'){
					   		tabuleiro[i][p4]=' ';
					   		printf("O GUERREIRO NA POSIÇÃO %d %d FOI ELIMINADO\n",i,p4);
					   		sleep(2);
							printmatriz(tabuleiro);
							qnt1--;
					   		break;
					   	}
					}
				}
				printmatriz(tabuleiro);
			}
			else if(tabuleiro[p3][p4]=='2'){
				printf("SELECIONE QUAL DIREÇÃO ATACAR (1- DIAGONAL ESQUERDA, 2- DIAGONAL DIREITA)\n");
				scanf("%d",&direcao);
				if(direcao>2){
					while(1){
						printf("PREZADO... NÃO COMPLIQUE... A POSIÇÃO QUE VOCÊ DIGITOU É INVÁLIDA!!!\n");
						scanf("%d",&direcao);
						if(direcao<=2){
							break;
						}	
					}
				}
				/* DIAGONAL ESQUERDA*/
				else if(direcao==1){
					p4=p4-1;
					p3=p3-1;
					for(i=p3;i>=0;i++){
						if(i<7){
					   		if(tabuleiro[i][p4]=='1' || tabuleiro[i][p4]=='2' || tabuleiro[i][p4]=='@'){
					   			tabuleiro[i][p4]=' ';
					   			printf("O GUERREIRO NA POSIÇÃO %d %d FOI ELIMINADO\n",i,p4);
					   			sleep(2);
								printmatriz(tabuleiro);
								qnt1--;
					   			break;
					   		}
					   	}
					   	p4=p4-1;
					}
				printmatriz(tabuleiro);
				}
				/* DIAGONAL DIREITA*/
				else if (direcao==2){
					p3=p3-1;
					p4=p4+1;
					for(i=p3;i>=0;i--){
						if(i<7){
							if(tabuleiro[i][p4]=='1' || tabuleiro[i][p4]=='2' || tabuleiro[i][p4]=='@'){
							   	tabuleiro[i][p4]=' ';
							   	printf("O GUERREIRO NA POSIÇÃO %d %d FOI ELIMINADO\n",i,p4);
							   	sleep(2);
								printmatriz(tabuleiro);
							   	qnt1--;
								break; 	
							}
						}
					   		p4=p4+1;
					}
					printmatriz(tabuleiro);	
				}
			}
			else if(tabuleiro[p3][p4]=='#' && Cp<=2){
				int quad_sort,num1=0;
				srand(time(NULL)); //gera um numero aleatorio
					do{
					quad_sort=rand() % 5; // Vai gerar o numero entre 0 e 3
					}
					while(quad_sort==num1); //sortea até que o "a" não seja um número que eu defini
					quadrante=quad_sort;
					switch (quadrante){
			  			case 1: 
			  				scan_pedra(tabuleiro,1,1,2,5);
			  				break;
			  			case 2: 
							scan_pedra(tabuleiro,3,1,4,5);
							break;
						case 3:
							scan_pedra(tabuleiro,1,6,2,10);
							break;
			  			case 4:
							scan_pedra(tabuleiro,3,6,4,10);
			    			break;
			   		 }   
						printmatriz(tabuleiro); 
			}
		}
	printf("qnt1 = %d e qnt2 = %d\n",qnt1, qnt2);
	if (qnt2==0){
	vento();
	printf("Parabéns!!! O jogador %s represetante da dobra do vento ganhou UHULLLLLLLL", primeiro);
	break;
	}
	if (qnt1==0){
	terra();
	printf("Parabéns!!! O jogador %s represetante da dobra da terra ganhou AEAEAEAEAEEA", segundo);
	break;
	}
		
	}

return 0;
}
