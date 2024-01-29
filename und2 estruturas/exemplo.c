#include <stdio.h>
#include <stdlib.h>

int main (void){
 // cria o arquivo: entrada.txt no modo "t"
 
 FILE * arquivo = fopen("entrada.txt", "rt");
 
  char c[20];

    if(arquivo==NULL){
    printf(" ERRO AO ABRIR O ARQUIVO!");
    exit(1);
 }
    else{
    printf("ARQUIVO CRIADO!");
 }
  //c = fgetc(arquivo); // lê um caractere do arquivo// // exemplo com fgetc 
  //fgets(c,20, arquivo); // lê uma linha do arquivo // exemplo com fgets 
  //fscanf(arquivo, "%s", c); //
  printf ("%s \n", c); // imprime o caractere lido
  
  if(fclose(arquivo)){
    printf("ARQUIVO FECHADO COM SUCESSO!");
 }
    // fecha o arquivo que foi criado 
 return 0;
}

// trecho de codigo escrito na liguagem c que permite criar arquivos  