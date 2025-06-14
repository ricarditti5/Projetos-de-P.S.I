/*1. Raízes(A, B, C, &R1, &R2) ? recebe os coeficientes de um polinómio de segundo grau e
calcula as suas raízes R1 e R2. Faça o programa para testar.*/
#include"stdio.h"
#include"conio.h"
#include"math.h"

void raizes(int a,int b,int c, float  *r1,float *r2)
{
	(*r1)=(-b+ sqrt(b*b-4*a*c))/2*a; 

	(*r2)=(-b- sqrt(b*b-4*a*c))/2*a; 	
}
main()
{
	int a,b,c;
	float r1,r2;
	
	printf("Diga o Quoicficiente de A:"); scanf("%d", &a);
	printf("Diga o Quoicficiente de B:"); scanf("%d", &b);
	printf("Diga o Quoicficiente de C:"); scanf("%d", &c);

	raizes(a,b,c,&r1,&r2);
	
	printf("As Raizes desse Polinomios sao: %f e %f",r1,r2);
	
	
//	if(((b*b-4*a*c)) <0)  
//	{
//		printf("\nImpossivel");
//	}
//	else
//	{
//		raizes(a,b,c,&r1,&r2);
//		printf("\nAs Raizes desse Polinomios sao: %f e %f",r1,r2);
//	}	Apenas uma das soluções


}



