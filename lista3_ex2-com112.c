//Stanley Andrade 2019010032 e Vitor Hermeto 2019003557

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct armazenar{
    char nome[10][20];
    int salario[10];
};

int main (){

    setlocale(LC_ALL, "");
    struct armazenar f;
    int i, troca, aux;

    for(i=0;i<10;i++){
        printf("nome do funcionario: ");
        scanf("%s", f.nome[i]);
        printf("salario do funcionario: ");
        scanf("%d", &f.salario[i]);
    }


    for(i=0;i<10;i++){
        printf("nome : %s --> ", f.nome[i]);
        printf(" salario: %d \n", f.salario[i]);
    }

printf(" \n\n salario ordenado \n\n");

troca = 1;
    while (troca == 1) {
        troca = 0;        
        for (i = 0; i <= 8; i++)
        {
            if (f.salario[i] < f.salario[i + 1])
            {
                troca = 1;
                aux = f.salario[i];
                f.salario[i] = f.salario[i + 1];
                f.salario[i + 1] = aux;
            }
        }
    }
	
	for (i=0; i<10; i++){

        printf("%d\n", f.salario[i]);    
}

printf("\n\n ordem alfabética \n \n");


for(i = 0; i < 10; i++){

    for (int z = i+1; z < 10; z++){    

        //compara se as letras são iguais
        if (strcmp(f.nome[i],f.nome[z]) > 0 ){
            
            char temp[20];

            strcpy(temp, f.nome[i]);
            strcpy(f.nome[i], f.nome[z]);
            strcpy(f.nome[z], temp);
        }
    }
}

for (int n=0; n<10; n++){

    printf("%s\n", f.nome[n]);    
}

    return 0;
}