#include <stdio.h>
#define PRIMOMAXIMO 1000

int main(){
int contador, primo, i, kprimo, contadorDivisao, j;
contador = 2;
kprimo = 0;



while(kprimo < PRIMOMAXIMO){
	contadorDivisao = 0;
	for(i = 1; i<contador;++i){
		j = contador%i;
		if (j == 0){
			++contadorDivisao;
			if (contadorDivisao > 1){
				i = contador;
			}	
		}
		
	}
	if (contadorDivisao>1)
			{
				//printf("nÃO PRIMO %d \n",contador );

			}
	else{
				++kprimo;
				//printf("Primo %d, posicao %d \n",contador, kprimo );
			}
	
		
	if (kprimo>=1000){
		printf("%d\n",contador);
	}
	++contador;
}
}
