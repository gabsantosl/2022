#include <stdio.h>

/*
=== ESTRUTURA WHILE ====

i=1; - iniciação 
while(condição){
printf("%d\n", i);
i++; - contador
}
*/

int main(){

    int i=0;
    char sair;

    printf("=== ESTRUTURA WHILE ===\n\n");

    i = 10; // iniciação
    while(i >= 1){ // condição
        printf("i: %d\n", i);
        i--; // contador
    }

    sair = 'n';
    while(sair != 's'){
        fflush(stdin);

        printf("\nDeseja sair? (s/n)\n");
        printf("R: ");
        scanf("%c", &sair);
    }

    return 0;
}