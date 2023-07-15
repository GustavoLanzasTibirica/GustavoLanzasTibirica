#include<stdio.h>
float alt_metros, kl_peso, icm; //leitura de entrada

main(){
	printf("Informe altura: "); //leitura de informacao
	scanf("%f", &alt_metros); 
	printf("Informe peso: ");
	scanf("%f", &kl_peso);
	//processamento-calculos dos valores conforme formula
	icm = kl_peso/(alt_metros*2);
	//processamento de saida
	printf("\n\n ***Relatorio***\n\n");
	printf("\n icm: %f", icm);
	printf("\n icm < 17 , muito abaixo do peso");
	printf("\n icm >= 17, abaixo do peso");
	printf("\n icm >= 18, peso normal");
	printf("\n icm >=25, obesidade I");
	printf("\n icm >=35 e icm <=29.99, obesidade II");
	printf("\n icm >=40, obesidade III");
	
}
