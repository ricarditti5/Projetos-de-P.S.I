/*18. Fazer a fun��o MEDIADE4 (com 4 entradas) que leva como argumento 4 n�meros inteiros e
calcula e devolve a m�dia desses n�meros. Fazer um programa que chame essa fun��o e imprima
o resultado.*/
#include"stdio.h"
#include"conio.h"

int MEDIADE4(int w,int x,int y,int z)
{
	int media;
	
	media=w+x+y+z;
	
	return(media);
}
//*******************************************************
main()
{
	int w,x,y,z;
	float media;
	
	printf("Diga 4 Numeros:"); scanf("%d %d %d %d",&w,&x,&y,&z);
	
	media=MEDIADE4(w,x,y,z);
	
	printf("%f",(float)media/4);
	
}
