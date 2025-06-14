/*5. Função media (de dois números)*/
#include"stdio.h"
#include"conio.h"

float calmedia(int a, int b)
{
	return((float)(a+b)/2.0);
}

main()
{
	float media;
	int a,b;
	
	printf("Diga dois Numeros:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	media=calmedia (a,b);
	
	printf("\nA Media e: %f",media);
}
