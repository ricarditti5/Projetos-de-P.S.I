/*6-Função maior_de_3*/
#include"stdio.h"
#include"conio.h"

int suptres(int n1,int n2,int n3)
{
	int res;
	
	if((n1>=n2)&&(n1>=n3)) 
	{
			res=n1;
	}
	else
		if(n2>=n3)
		{
			res=n2;
		}
			else
			{	
				res=n3;
			}
			
	return(res)	;
}
	
main()
{
	int n1,n2,n3, res; 
	
	printf("Diga um Numero:"); scanf("%d",&n1);
	printf("Diga um Numero:"); scanf("%d",&n2);
	printf("Diga um Numero:"); scanf("%d",&n3);
	
	res=suptres(n1,n2,n3);

	printf("O Maior numero e %d",res);
}
