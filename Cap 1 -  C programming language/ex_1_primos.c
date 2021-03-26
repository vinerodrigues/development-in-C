#include <stdio.h>
#include <math.h>
#define PRIMOMAXIMO 100000

int main(){

	int contador, primo, i, kprimo, contadorDivisao, j, a;
	contador = 2;
	kprimo = 0;
	

while(kprimo < PRIMOMAXIMO){
	contadorDivisao = 0;

	
	
	if (sqrt(contador) != 0 && contador % 2 != 0 && contador % 3 != 0 && contador % 5 != 0 && contador % 7 != 0|| contador == 2 || contador == 3 || contador == 5 || contador == 7){	
		for(i = 1; i<contador;++i){
			//printf("INICIO I: %d\n",i );
			j = contador%i;
			if (j == 0){
				++contadorDivisao;
				//printf("CONTADOR DE DIVISÂO %d\n", contadorDivisao );
				if (contadorDivisao > 1){
					//printf("AQUUIIIIIIIIIIIIIIII \n" );
					//printf("IIIIII %d\n", i );
					//printf("contador %d\n",contador );
					i = contador;
					//printf("IIIIII depois da atribuição %d\n", i );
				}	
			}		
		}
		if (contadorDivisao<2)
				{
				++kprimo;
				}
				
		if (kprimo>=100000){
			printf("%d\n",contador);
		} 
	}
	//printf("CONTADOR : %d\n", contador );
	++contador;
}
}
