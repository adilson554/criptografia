#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
   int i;
   int j;
   int k;
   int l;
   int m;
   int ntable;
   int nmessage;
   int nvetor;
   bool ver;
   k = 0;
//declarando e atribuindo valores nos vetores.
  printf("=====================================\n");
  printf("=====================================\n");
  printf("         Criptografia\n");
  printf("=====================================\n");

   char table[28] ={' ','A','B','C','D','E','F','G',
                    'H','I','J','K','L','M','N','O',
                    'P','Q','R','S','T','U','V','W',
                    'X','Y','Z'};
   char message[100];
   printf("Entre com a mensagem em letras maiúsculas e sem acentos: \n");
   scanf("%[^\n]s", message);
   setbuf(stdin, NULL);
   printf("\n");
   printf("Você digitou: %s\n",message);
   int vetor[100];
   
   ntable = strlen(table);
   nmessage = strlen(message);

  printf("=====================================\n");
  printf("=====================================\n");
  printf(" A mensagem convertida pela tabela\n");
  printf("=====================================\n");


for (j = 0; j < nmessage; j = j + 1) {
   for (i = 0; i < ntable; i = i + 1) {
      ver = (message[j] == table[i]);
      if(ver == 1){
         printf("%d ",i);
         vetor[k] = i;
         k = k + 1;
         }
   }}

printf("\n-----------------------------\n");
printf("=====================================\n");
  printf("=====================================\n");
  printf(" MENSAGEM CONVERTIDA E CRIPTOGRAFADA (falta) \n");
  printf("=====================================\n");

printf("\n-----------------------------\n");
printf("=====================================\n");
  printf("=====================================\n");
  printf(" mensagem descriptografada: \n");
  printf("=====================================\n");


for(i=0;i<nmessage;i=i+1){
   m = vetor[i];
   printf("%c",table[m]);
}
printf("\n-----------------------------\n");

   return 0;
}
