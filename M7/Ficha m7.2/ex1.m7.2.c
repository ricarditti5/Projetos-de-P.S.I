/*1. Guardar num ficheiro estruturas de dados de alunos de uma escola (campos: numero, nome e
media (numero real)). O menu do programa deverá ser:
0-SAIR
1-LISTAR
2-LER NOVO
3-PROCURAR (dado o numero)
4-ALTERAR (dado o numero)
5-LIMPAR (apagar o ficheiro)*/

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"

typedef struct {
	
	char nome[80];
	int numero;
	float media;
} tipoAluno;
//***********************************************
void lerAluno (tipoAluno *x)
{
	printf("\n Diga o nome: "); 	fflush(stdin); gets((*x).nome);
	printf("\n Diga o numero: "); 	scanf("%d",&(*x).numero);
	printf("\n Diga a media: "); 	scanf("%f",&(*x).media);
}


void imprimirAluno (tipoAluno x)
{
	printf("\nNome: %s", x.nome);
	printf("\nNumero: %d", x.numero);
	printf("\nMedia: %.2f", x.media);
}

//***********************************************
int menu ()
{
	int op;
	
	do
	{
		system("cls");
		puts("OPCOES:");
		puts("\t0- Sair");
		puts("\t1- Criar Ficheiro");
		puts("\t2- Listar");
		puts("\t3- Ler novo");
		puts("\t4- Procurar");
		puts("\t5- Alterar");
		puts("\t6- Limpar");

		printf("\n\nEscolha a sua opcao: ");
		scanf("%d",&op);
	}	while ((op<0) || (op>6) );
		
	return(op);
}
//------------------------------------------------------
void criarFicheiro(tipoAluno *x)
{
	FILE *fp;
	int ch;
	char nomeFicheiro[100];

	fp = fopen(nomeFicheiro,"w");
	
	printf("**************************Ler dados dos Alunos**************************");
	lerAluno(x);
	fflush(stdin);
	fprintf(fp,"%s %d %.2f",(*x).nome,(*x).numero,(*x).media);

	fclose(fp);
}
	
//------------------------------------------------------
void listarTudoQueEstaNoFicheiro()
{
	FILE *fp;
	int ch;
	char nomeFicheiro[100];

	fp = fopen(nomeFicheiro,"r");

	if(fp == NULL){
		printf("O Ficheiro não existe");
	}
	else{
		ch = fgetc(fp);

   		while(ch!=EOF){
   			printf("%c",ch);
   			ch = fgetc(fp);
		   }
	}
	fclose(fp);
}
//------------------------------------------------------
void lerNovoAlunoParaOFicheiro()
{
	
}
//------------------------------------------------------
void procurar()
{

	
}
//------------------------------------------------------
void alterar()
{

}
//------------------------------------------------------
void limpar()
{
    
}
//------------------------------------------------------
main()
{
	int op;
	tipoAluno *x;
	do
	{
		op=menu();
		switch(op)
		{ 
			case 1: criarFicheiro(x); 		break;
			case 2: listarTudoQueEstaNoFicheiro(x); 		break;
			case 3: lerNovoAlunoParaOFicheiro(x);		break;
			case 4: procurar(x); 	break;
			case 5:	alterar(x);		break;
			case 6:	limpar();		break;
		}
		getch();
	}	while(op!=0);
}
