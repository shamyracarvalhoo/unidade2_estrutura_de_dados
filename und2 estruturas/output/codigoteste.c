#include <stdio.h>

int main (void){
    int c;
    int nlinhas=0; 
    FILE *fp;

    // abre arquivo para leitura

    fp= fopen ("entrada.txt", "rt");
    if(fp==NULL){
        printf("nao foi possivel abrir arquivo. \n");
        return 1; 
    }

    // lê caractere a caractere

    while ((c=fgetc(fp))!= EOF){
        if(c== '\n'); 
        nlinhas++;
    }

    //fecha arquivo
    fclose(fp);
    //exibe resultado na tela
    printf ("Numero de linhas= %d\n", nlinhas);
    return 0; 
}