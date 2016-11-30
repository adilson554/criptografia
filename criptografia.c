#include<stdio.h>
#include<string.h>

int main(){

   int tamanho;
 
//declarando e atribuindo valores no vetor de char

   char texto[28] ={'_','A','B','C','D','E','F','G',
                    'H','I','J','K','L','M','N','O',
                    'P','Q','R','S','T','U','V','W',
                    'X','Y','Z'};
   
   tamanho = strlen(texto);

  printf("\n%d\n\n",tamanho);
  printf("\n%s\n",texto);
 
   return 0;
}
