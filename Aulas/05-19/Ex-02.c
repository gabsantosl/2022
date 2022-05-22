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

    printf("=== ESTRUTURA WHILE ===\n\n");

    i=10; // iniciação
    while(i<=10){ // condição
        printf("i: %d\n", i);
        i++; // contador
    }

    return 0;
}