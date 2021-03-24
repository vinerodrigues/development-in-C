#include<stdio.h>
/*ESCREVE UM PROGRAMA QUE INVERTA UMA STRING*/
/*DEFINIR UMA CONSTANTE QUE SEJA O LIMITE DE TAMANHO DA FUNÇÃO*/
#define MAXLINE 1000

/*CHAMANDO AS FUNÇÕES USADAS NO PROGRAMA*/
int createList(char s[], int maxline);
int reverseLine(char listaOriginal[], char listaInvertida[], int len);

int main(void){
	/*DECLARANDO AS VARIAVEIS*/
	char list[MAXLINE];
	char reverse[MAXLINE];
	int len;
	while((len = createList(list, MAXLINE))>0){
		printf("Palavra recebida: %s\n", list );
		reverseLine(list, reverse, len);
		printf("Palavra invertida: %s\n", reverse );
	}
	printf("Fim do PROGRAMA\n");
	return 0;
}

/*ESCREVER UMA FUNÇÃO PARA RECEBER A STIRNG*/
int createList(char s[],  int maxline){
	int i, c;
	i=0;
	while((c = getchar()) != EOF && i < maxline -1 && c != '\n'){
		s[i] = c;
		++i;
	}
	if ( c == '\n'){
		s[i]= '\0';/******************************/
	}
	return i;
}
/*ESCREVER FUNÇÃO PARA INVERTER A STRING*/
int reverseLine(char listaOriginal[], char listaInvertida[], int len){
	int i;
	i=0;
	while(len>=0){
		listaInvertida[i] = listaOriginal[len-1];
		++i;
		--len;
	}
}