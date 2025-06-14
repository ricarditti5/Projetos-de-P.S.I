/*1. Declarar uma estrutura (do tipo dados_pessoa) e preencher com valores:
1.1. Logo na declaração " "(nome) e 0 (idade).
1.2. Após a declaração "Ana Silva"(nome) e 20 (idade).
1.3. Pedir ao utilizador e ler*/
#include "stdio.h"
#include "string.h"

typedef struct Persona 
{
    int num;
    char nome[50];
    float altura;
    float peso;
    char sexo; // M ou F
} tipoPersona;

main() 
{
    tipoPersona x = {10, "Joao", 1.75, 50, 'M'};

    printf("Numero: %d\nNome: %s\nAltura: %.2f\nPeso: %.1f\nSexo: %c\n", x.num, x.nome, x.altura, x.peso, x.sexo);

    x.num = 27;
    strcpy(x.nome, "Ricardo");
    x.altura = 1.81;
    x.peso = 72;
    x.sexo = 'M';

    printf("\nNumero: %d\nNome: %s\nAltura: %.2f\nPeso: %.1f\nSexo: %c\n", x.num, x.nome, x.altura, x.peso, x.sexo);

    printf("\nIntroduza o numero: ");
    scanf("%d", &x.num);
    getchar();

    printf("Introduza o nome: ");
    fgets(x.nome, sizeof(x.nome), stdin);
    x.nome[strcspn(x.nome, "\n")] = '\0';

    printf("Introduza a altura: ");
    scanf("%f", &x.altura);

    printf("Introduza o peso: ");
    scanf("%f", &x.peso);
    getchar();

    printf("Introduza o sexo (M/F): ");
    scanf("%c", &x.sexo);

    printf("\nNumero: %d\nNome: %s\nAltura: %.2f\nPeso: %.1f\nSexo: %c\n", x.num, x.nome, x.altura, x.peso, x.sexo);
}