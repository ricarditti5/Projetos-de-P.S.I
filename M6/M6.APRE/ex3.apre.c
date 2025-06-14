#include"stdio.h"
#include"conio.h"


main(){
    int x,y,*ip;

    printf("\nEndereco x: %X  y: %X IP:%X", &x, &y,&ip);
    printf("\nConteudos: x: %d y:%d IP:%d", x, y, ip);
    printf("\n\n");
    x=3;
    y=4;

    printf("\nEndereco x: %X  y: %X IP:%X", &x, &y,&ip);
    printf("\nConteudos: x: %d y:%d IP:%d", x, y, ip);
    printf("\n\n");
    ip=&x;

    printf("\nEndereco x: %X  y: %X IP:%X", &x, &y,&ip);
    printf("\nConteudos: x: %d y:%d IP:%d", x, y, ip);
    printf("\n\n");
    x = *ip;

    printf("\nEndereco x: %X  y: %X IP:%X", &x, &y,&ip);
    printf("\nConteudos: x: %d y:%d IP:%d", x, y, ip);
    printf("\n\n");
    *ip = 3;

    printf("\nEndereco x: %X  y: %X IP:%X", &x, &y,&ip);
    printf("\nConteudos: x: %d y:%d IP:%d", x, y, ip);
    printf("\n\n");
    ip=&x;
    printf("\nEndereco x: %X  y: %X IP:%X", &x, &y,&ip);
    printf("\nConteudos: x: %d y:%d IP:%d", x, y, ip);
}