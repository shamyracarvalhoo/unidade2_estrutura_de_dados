#include <stdio.h>
#include <stdlib.h>

int main (void){
 // cria o arquivo: entrada.txt no modo "t"
 
 FILE * arquivo = fopen("entrada_escrita.txt", "a");
 
  char c[20];

    if(arquivo==NULL){
    printf(" ERRO AO ABRIR O ARQUIVO!");
    exit(1);
 }
    else{
    printf("ARQUIVO CRIADO!");
 }
 //fputc('A', arquivo );//
 //fputs ("Hello World!", arquivo);//

fprintf ( arquivo, "Tô com fome!" ) ; 

  
  if(fclose(arquivo)){
    printf("ARQUIVO FECHADO COM SUCESSO!");
 }
    // fecha o arquivo que foi criado 
 return 0;
}

// trecho de codigo escrito na liguagem c que permite criar arquivos  
