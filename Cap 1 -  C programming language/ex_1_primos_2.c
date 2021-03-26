#include <stdio.h>
#define PRIMOMAXIMO 1000000 /*Primeiro defini o tamanho maximo de uma string*/

int main(){
	/*Um numero primo é aquele que é impar e não é divisivel por um primo anterior*/
		/*Para isso, tenho que ter um contador para preencher a lista até 1000000 a cada passo dado, pois só vou comparar até o ultimo primo achado*/
	/* Declarando as variaveis*/
	long int i, contPrimos, contador, aux, aux_2; /* Declarando as variaveis*/
	long int primos[PRIMOMAXIMO];	
	/* ATRIBUINDO VALOR INICIAL AS VARIAVEIS*/

	contador = 1;
	contPrimos = 0;
	while(contPrimos < PRIMOMAXIMO ){ /*ENQUANTO O PRIMO NÃO FOR IGUAL AO VALOR MAXIMO*/
		aux = 0;
		if (contador%2 != 0 && contador != 1){/*SE O NUMERO FOR IMPAR E NÃO FOR 1*/
			for( i = 0; i < contPrimos; i++){/*PARA I, QUE INICIALMENTE É ZERO, ENQUANTO ELE FOR MENOR QUE A QUANTIDADE DE PRIMO, ELE CRESCE 1 EM 1*/
				
				if (contador/primos[i]<primos[i]){
					aux_2 = (contador/primos[i]);
					i = contPrimos;
					aux = 0;
				}

				else if (contador%primos[i] == 0){
					i = contPrimos;
					aux = 1;
				}
			}
			if (aux == 0){
				primos[contPrimos] = contador;
				++contador;
				++contPrimos;
			}	
		}
		else if(contador == 2 ){
			primos[contPrimos] = contador;
			++contPrimos;
		}
		++contador;	
	}

printf("%ld\n", contPrimos );
printf("%ld\n", primos[PRIMOMAXIMO - 1] );

return 0;
}
