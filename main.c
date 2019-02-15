#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
   //por uma sequência de numeros aleatórios em ordem crescente
   int n,x,i;
   printf("quantos numeros:");
   scanf("%d",&n);
   Pilha A = pilha(n);
   Pilha B = pilha(n);
   for(i=1;i<=n;i++){
        printf("%d.o elemento:",i);
        scanf("%d",&x);
        while(!vaziap(A)&&x<topo(A))
            empilha(desempilha(A),B);
        if(vaziap(A))
            empilha(x,A);
        else if(x!=topo(A))
            empilha(x,A);
        while(!vaziap(B))
            empilha(desempilha(B),A);}
    while(!vaziap(A))
        printf("%d\n",desempilha(A));
    destroip(&A);
    destroip(&B);

    return 0;}
