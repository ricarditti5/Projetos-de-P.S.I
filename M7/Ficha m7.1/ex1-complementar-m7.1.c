#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"string.h"

main(){
    FILE *fp;   int i,v[10],n;

    if((fp = fopen("DADOS.DAT","rb"))==NULL){
        printf("Impossivel Abrir o Ficheiro %s\n","DADOS.DAT");
        exit(1);
    }
        else{
            n = fread(v,sizeof(int),10,fp);

            if(n!=10){
                printf("Forem lidos apenas %d Elementos!!!\n",n);

                for(i=0;i<n;i++){
                    printf("%2doNo: %d\n",i+1,v[i]);
                }
            }
        }
}