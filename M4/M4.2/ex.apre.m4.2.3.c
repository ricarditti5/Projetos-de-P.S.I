/*3. 10 sexos
3.1. declarar um array, sexos, de 10 elementos do tipo char (f/m)
3.2. inicializ�-lo com '-'
3.3. imprimir os dados do array
3.4. ler novos dados para o array (ex: o sexo dos 10 primeiros alunos da turma)
3.5. imprimir os dados do array
3.6. verificar se h� alguma rapariga
3.7. contar quantas raparigas h�
3.8. contar quantos rapazes h�
3.9. calcular e imprimir a percentagem de raparigas
3.10. calcular e imprimir a percentagem de rapazes*/

#include"conio.h"
#include"stdio.h"
#include"stdlib.h"

#define NA 3
void iniciasex(char sex[NA])
{
	int i;
			
	for(i=0;i<NA;i++)								
	{
		sex[i]='-'; 	//3.2. inicializ�-lo com '-'
	} 		
}
//*******************************************************+
void imprimsex(char sex[NA])
{
	int i;
			
		for(i=0;i<NA;i++)
	{
		printf("\n%c",sex[i]); //3.3. imprimir os dados do array
	}

}
//*******************************************************+
void lersex(char sex[NA])
{
	int i;
			
	for(i=0;i<NA;i++)
	{
		do
		{
			printf("\nDiga o Sexo do Aluno %d(F-Feminino ou M-Masculino): ",i+1);	
			fflush(stdin);
			sex[i]=getchar(); //3.4. ler novos dados para o array (ex: o sexo dos 10 primeiros alunos da turma)
		}	while(!(  (sex[i]=='F') || (sex[i]=='M') || (sex[i]=='f') || (sex[i]=='m') ));
	}
		
	
}
//*******************************************************+
void imprimarray(char sex[NA])
{
	int i;
			
for(i=0;i<NA;i++)
	{
		printf("\n%c",sex[i]);	//3.5. imprimir os dados do array
	}	
}
//*******************************************************+
void verificarf(char sex[NA])
{
	int i,contf=0,existe;
			
	existe=0;
	for(i=0;i<NA;i++)
	{
		if( (sex[i]=='F') || (sex[i]=='f') ) //3.6. verificar se h� alguma rapariga
		{
			existe=1;
			break;
//			contf++; //3.7. contar quantas raparigas h�
		}
	}
		if(existe==0)
	{
		printf("\n Nao Ha Mulheres");
	}
	else
	{
			printf("\n Ha Mulheres");
	}
	
	for(i=0;i<NA;i++)
	{
		if( (sex[i]=='F') || (sex[i]=='f') ) //3.6. verificar se h� alguma rapariga
		{
			contf++;
//			contf++; //3.7. contar quantas raparigas h�
		}
	}
	printf("\nTem %d Mulheres",contf);
}
//*******************************************************+
void verificarm(char sex[NA])
{
	int i,contm=0,existe;
			
	existe=0;
	
	for(i=0;i<NA;i++)
	{
		if( (sex[i]=='m') || (sex[i]=='M') ) 
		{
			contm++; //3.8. contar quantos rapazes h�
		}
	}
		printf("\nTem %d Homens",contm);
}
main()
{
	int i,contf=0,contm=0,perc,	existe;		//3.1. declarar um array, sexos, de 10 elementos do tipo char (f/m)
	char sex[NA];
	
	printf("\nOs Dados do Array sao:");

	iniciasex(sex);
	
	imprimsex(sex);
	
	lersex(sex);
	
	imprimarray(sex);
	
	verificarf(sex);
	
	verificarm(sex);

	
	printf("\nTem %d por cento de Mulheres e %d por cento de Homens",100*contf/NA,100*contm/NA);
		//3.9. calcular e imprimir a percentagem de raparigas
		
		//3.10. calcular e imprimir a percentagem de rapazes*/	
}
