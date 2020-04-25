//Stanley Andrade 2019010032 e Vitor Hermeto 2019003557

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, aux, troca, V[10];

int main(){

    for(i=0; i<10; i++)
    {
        printf("\nDigite um número: \t");
        scanf("%d",&V[i]);
    }

    troca = 1;
    while (troca == 1) {
        troca = 0;        
        for (i = 0; i <= 8; i++)
        {
            if (V[i] < V[i + 1])
            {
                troca = 1;
                aux = V[i];
                V[i] = V[i + 1];
                V[i + 1] = aux;
            }
        }
    }
    printf("\n Valores ordenados \n");
    imprimir();

    return 0;
}

void imprimir(){

    for (i=0; i<10; i++){

        printf("%d\n", V[i]);
    }
}