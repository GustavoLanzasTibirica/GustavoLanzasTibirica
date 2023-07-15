#include <stdio.h>

float p1,p2;

main(){
	float media;
	printf("qual nota da p1");
	scanf("%i",&p1);
	printf("qual nota da p2");
	scanf("%i",&p2);
	media=float(p1+p2)/2;
	printf("a media foi %f", media);
	
}
