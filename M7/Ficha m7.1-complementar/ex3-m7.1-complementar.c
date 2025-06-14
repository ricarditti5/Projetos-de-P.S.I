/*3. Copie o programa anterior e altere-o de forma a que os dados relativos às notas negativas sejam
enviados para um ficheiro chamado REPROVADOS.TXT e os dados relativos às notas positivas
sejam enviados para um ficheiro chamado APROVADOS.TXT
NOTA: Use a função fprintf para escrever dados nos ficheiros*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"

main(){
	
	FILE *fin, *fout,*fpositivas,*fnegativas;
	char nome[10];
	int res,nota;
	
	fin = fopen("notas10P2.txt","r");
	fpositivas = fopen("Aprovados.txt","w");
	fnegativas = fopen("Reprovados.txt","w");

	if((fin == NULL)||(fpositivas == NULL)||(fnegativas == NULL)){
		printf("Impossivel abrir o ficheiro notas.txt");
	}
	else{
		printf("Ficheiro aberto\n");
		
		res=fscanf(fin,"%s %d",nome,&nota);	
		
		while(res==2){
			
			if(nota>=10){
				
			fprintf(fpositivas, "\n%s %d",nome,nota);	
			}
			else{
					fprintf(fnegativas, "\n%s %d",nome,nota);	
			}
			res=fscanf(fin,"%s %d",nome,&nota);	
		}		
	}
		
	fclose(fin);
	fclose(fpositivas);
	fclose(fnegativas);
}
