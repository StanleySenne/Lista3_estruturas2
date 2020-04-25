//Stanley Andrade 2019010032 e Vitor Hermeto 2019003557

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct armazenar{
    char descricao[10][100];
    int preco[10], codigo[10];
};
struct produto{
	char nome[10][20];
	struct armazenar conjunto[10];
};

int main(){

    struct produto f;
    int i, troca, aux, j, x, menor;
    char aux1[10];

    for(i=0;i<10;i++){
        printf("nome do produto: ");
        scanf("%s", f.nome[i]);
        printf("codigo do produto: ");
        scanf("%d", &f.conjunto[i].codigo);
        printf("preço do produto: ");
        scanf("%d", &f.conjunto[i].preco);
        printf("descrição do produto: ");
        scanf("%s", f.conjunto[i].descricao);
    }

	for(i = 0; i < 10 - 1; i++)
        {
                x = 0;
                menor = i;
                for(j = i + 1; j < 10; j++)
                {
                    x = 0;
                    while(f.nome[menor][x] == f.nome[j][x])
                    {
                            x++;
                    } 
                    if(f.nome[menor][x] > f.nome[j][x])
                    {
                         menor = j;
                    }
                }
                if(menor != i)
                {
                        strcpy(aux1, f.nome[menor]);
                        strcpy(f.nome[menor], f.nome[i]);
                        strcpy(f.nome[i], aux1);
                }
        }
	
	for (i=0; i<10; i++){

        printf("%s\n", f.nome[i]);
		printf("%d\n", f.conjunto[i].codigo);
		printf("%d\n", f.conjunto[i].preco);
		printf("%s\n", f.conjunto[i].descricao);    
}

    return 0;
}