#include<stdio.h>
#define MAXLINE 1000
/*DEFINIR UMA CONSTATNTE PARA O TAMANHO MAXIMO*/
/*CHAMAR AS FUNÇÕES*/

int countLine(char line[], int maxline);
void copiar(char para[], char deOnde[]);

int main(void){
	/*essas variaveis vão ser responsaveis por amazenar o valor do maior tamanho guardado e valor do tamanho da vez*/
	int len;
	int max;
	/*Aqui vão ser declaradas os dois arrays um responsavel por armazenar a maior lista e a lista da vez*/
	char line[MAXLINE];
	char maiorLista[MAXLINE];
	max = 0;
	while((len = countLine(line, MAXLINE)) > 0 ){
		printf("O tamanho da string eh %d \n", len);
		printf("O tamanho maximo para string eh %d \n", MAXLINE );
		if (len>max){
			max = len;

			copiar(maiorLista, line);}
		}
	if (max > 0){
		printf( "A maior palavra foi %s com %d letras \n", maiorLista, max);
		}
	return 0;}

/*DECLARAR FUNÇÃO*/
/*FUNÇÃO PARA PEGAR AS PALAVRAS E CONTAR AS LINHAS*/
/*as condições de parada são EOF, '\n' e o limite superior definido como maximo lenth*/
/*o ultimo caractere adicionado vai ser 0 \0 que vai definir o limite dos caractres*/

int countLine(char s[], int tamanhoMaximo){
	int i;
	int c; 
	for(i=0;(c=getchar()) != EOF && i < tamanhoMaximo-1 && c != '\n'; ++i){
		if ( c == ' ' || c == '\t' ){
			--i;
		}
		else{
			s[i] = c;
		}
		
	}

	s[i] = '\0';
	
	return i;
	
	}
/*FUNÇÃO PARA COPIAR E ARMAZENAR O MAIOR TAMANHO*/

void copiar(char para[],char deOnde[]){
	int i;
	i = 0;
	while ((para[i] = deOnde[i]) != '\0')
		++i;
	}