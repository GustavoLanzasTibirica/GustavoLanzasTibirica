#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int nro, nro_usr;

main(){
	srand(time(NULL));
	// entrada de dados
	nro = 1+rand()%10;
	printf("*** Programa de Tentativas de Advinhar NRO ***\n\n");
	printf("Tentativa 01 - Digite um Numero entre 01 e 10: ");
	scanf("%i", &nro_usr);
	
	//processamento
	if(nro == nro_usr)
		printf("Parabens, conseguiu de primeira!!!");
	else{
		printf("Tentativa 02 - Digite Novamente um Numero: ");
		scanf("%i", &nro_usr);
		if(nro == nro_usr)
			printf("Parabens, na Segunda!!!");
		else{
			printf("Tentativa 03 - Digite masi uma vez: ");
			scanf("%i", &nro_usr);
			if(nro == nro_usr)
				printf("Na Ultima, Parabens!!!");
			else
				printf("Errouuuuu, o numero foi %i, GAME OVER!!!");
		}
	}
		
	
}
