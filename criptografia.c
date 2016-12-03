#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
   int i;
   int j;
   int k;
   int tamanhotexto;
   int tamanhomensagem;
   bool ver;
   k = 0;
//declarando e atribuindo valores no vetor de char

   char texto[28] ={' ','A','B','C','D','E','F','G',
                    'H','I','J','K','L','M','N','O',
                    'P','Q','R','S','T','U','V','W',
                    'X','Y','Z'};
   char mensagem[100] = "ADILSON FRANCISCO";
   int vetor[100];
   
   tamanhotexto = strlen(texto);
   tamanhomensagem = strlen(mensagem);

  printf("\n%d\n\n",tamanhotexto);
  printf("\n%d\n\n",tamanhomensagem);
  printf("\n%s\n",texto);
  //printf("\n%s\n",mensagem);

//


for(j=0;j<tamanhomensagem;j = j+1){
   for(i=0;i<tamanhotexto;i=i+1){
      ver = (mensagem[j]==texto[i]);
      if(ver == 1){
         printf("%d\n",i);
         vetor[k] = i;
         k = k+1;
         }
   }}


 
   return 0;
}
