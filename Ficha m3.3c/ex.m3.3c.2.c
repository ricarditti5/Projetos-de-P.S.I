	/*2. Converte (min, &h, &minsobra) ? recebe um valor em minutos e converte-o em horas e
minutos sobrantes. Faça o programa para testar.*/
#include"stdio.h"
#include"conio.h"
#include"Math.h"
#include"Time.h"

void converte(int tmp, int *hrs,int *minsobr )
{
	if((*hrs>0) && (*minsobr>1))
	{
		*hrs=tmp/60;
		*minsobr=tmp-60;
	}
//	else
//	{
//		if((*hrs=0) || (*hrs<0) && (*minsobr<0)||(*minsobr>1))
//		{
//			*hrs==0;
//			*minsobr==*minsobr;
//		}
//	}
//
//	
//
//}
//void convertpsitivo(int *minsobr)
//{
//
}
//*********************************************************
main()
{
	int tmp, *hrs, *minsobr;
	
	printf("Diga um Valor em Minutos: "); scanf("%d", &tmp);
	
	converte(tmp, &hrs, &minsobr);
	
//	convertpsitivo(&minsobr);
	printf("\n%d Minutos equivalem a %d Horas e %d Minutos",tmp,hrs,minsobr);
}
