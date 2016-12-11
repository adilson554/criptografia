#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

int main() {
    int i,j,k; // contadores
    bool ver; // variável boleana para testar paridade e igualdade;
    // Matriz A invertível, e matriz B = A^-1
    float A[2][2];
    A[0][0] = 2;
    A[0][1] = 0;
    A[1][0] = 1;
    A[1][1] = 0;
    //--------------------

    // Tabela de conversão
    char table[29] = {' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',
                     'P','Q','R','S','T','U','V','W','X','Y','Z','.',','};
    //--------------------

    // Mensagem
    char message[100];
    printf("Entre com a mensagem em letras maiúsculas e sem acentos: \n");
   setbuf(stdin, NULL);
   scanf("%[^\n]s", message);
   setbuf(stdin, NULL);
   printf("\n");
   printf("Você digitou: %s\n",message);
    //-------------------

    printf("%s\n",table);


    int vetor[100];
    int ntable = strlen(table);
    int nmessage = strlen(message);
    printf("A tabela de conversão tem %d caracteres\n", ntable);
    printf("O texto que você digitou tem %d caracteres\n",nmessage);
    printf("O texto que você digitou é: %s\n", message);

    if (nmessage%2 == 1){
       message[nmessage+1]= '.';
       printf("nova mensagem %s\n",message);
    }
    int xnmessage = strlen(message);
    printf("%d\n",xnmessage);

    k=0;
    for (j = 0; j < xnmessage; j = j + 1) {
    for (i = 0; i < ntable; i = i + 1) {
        ver = (message[j] == table[i]);
        if(ver == 1){
            printf("-%d ",i);
            vetor[k] = i;
            k = k + 1;
        }
    }
    }
    printf("\n\n%d\n\n",vetor[6]);
    for (i=0;i<xnmessage;i=i+1){
    printf(" |%d",vetor[i]);}







    for (i = 0; i < xnmessage; i = i+1) {
        printf("...%d",vetor[i]);
    }

    printf("\n");
    int vetorcrip[100];
    for (i = 0; i < xnmessage; i = i+1) {
        if (i%2 == 0){
            vetorcrip[i] = A[0][0]*vetor[i] + A[0][1]*vetor[i+1];
            printf("+%d ",vetorcrip[i]%29);
        }
        else {
            vetorcrip[i] = A[1][0]*vetor[i] + A[1][1]*vetor[i+1];
            printf("++%d ",vetorcrip[i]%29);
        }
    }

    char charcrip[100];
    for(i = 0; i < xnmessage; i=i+1) {
        charcrip[i] = table[vetorcrip[i]];
        printf("*%c",charcrip[i]);
    }
    return 0;

}
