#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

void proc1()
{
    printf("Troque o Printf");
}
void proc2()
{
    printf("Troque o Printf");
}
void proc3()
{
    printf("Troque o Printf");
}
int MENU()
{
    int op;
	system("cls");
    printf("\nMenu:\n");
    printf("\n1-aaaaaa\n");
    printf("\n2-bbbbbbbb\n");
    printf("\n3-ccccccccc\n");
    printf("\n0-SAIR\n");
    printf("\nDiga a sua Opcao:");    scanf("%d",&op);
    while( (op<0) || (op>3) )
    {
        printf("Essa opcao esta errada \nDiga a sua opcao [0...3]");    scanf("%d",&op);
    }
    return(op);

}
main()
{
    int op;

    do
    {
        op=MENU();

        switch(op)
        {
            case 1:     proc1();    break;
            case 2:     proc2();    break;
            case 3:     proc3();    break;
            case 0:     printf("\nObrigado por Utilizar o Nosso Programa\n Ate breve");    break;
        }

        printf("\n\n");
        system("pause");

    } while (op!=0);
    
}
