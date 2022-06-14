#include <stdio.h>
#include <stdlib.h>

/*
=== PESQUISA SOBRE EQUIPES DE FORMULA 1 ===
-   Solicite, inicialmente, a quantidade de pessoas que serão entrevistadas, 
    devendo esta quantidade ser maior que 5 (cinco) pessoas, e para cada uma 
    a opinião entre as equipes indicadas acima.
-   Os usuários poderão escolher entre as equipes F = Ferrari, R = Red Bull e 
    M = Mercedes.  
-   Nesta pesquisa qualquer indicação diferente das opções destas três equipes 
    será considerada como sendo outra equipe privilegiada diferente destas três. 
-   Em uma nova janela, o programa deverá exibir a quantidade de indicações 
    recebidas por cada equipe e a quantidade de indicações em outra equipe que 
    não sejam estas três.
-   Para se verificar que a opinião dos participantes é que outra equipe foi mais
    privilegiada o algoritmo deverá apresentar a seguinte mensagem “Outra equipe
    privilegiada”, caso a quantidade das indicações diferentes de F, R e M seja maior
    que a soma das indicações nas outras três equipes da pesquisa (F, R, M).
*/

int main(){

    int part = 0, i = 0, j = 1, f = 0, r = 0, m = 0, o = 0, somaEQP = 0;
    char op;

    printf("=== PESQUISA DE OPINIAO FORMULA 1 ===\n\n");

    do{
        printf("Quantas pessoas responderao a pesquisa?\n");
        printf("R: ");
        scanf("%d", &part);

        if(part < 5){
        	system("cls");
            printf("\nQuantidade minima de participantes nao atingida.\n");
            printf("=== PESQUISA DE OPINIAO FORMULA 1 ===\n\n");
        }
    }while(part < 5);

    fflush(stdin);
    system("cls");

    for(i=1;i<=part;i++){
        printf("\n===== PESSOA #%d =====\n", j);
        printf("\nEm sua opiniao, as novas regras mais privilegiaram qual equipe?\n");
        printf("F = FERRARI\n");
        printf("R = RED BULL\n");
        printf("M = MERCEDES\n");
        printf("\nR: ");
        scanf("%c", &op);

        switch(op){
            case 'f':
            f++;
            break;
            case 'F':
            f++;
            break;
            case 'r':
            r++;
            break;
            case 'R':
            r++;
            break;
            case 'm':
            m++;
            break;
            case 'M':
            m++;
            break;
            default:
            o++;
            break;
        }
        
        j++;
        fflush(stdin);
        system("cls");
    }

    somaEQP = f + m + r;

    printf("=== RESULTADOS DA PESQUISA ===\n\n");

    printf("EQUIPE FERRARI: %d votos.\n", f);
    printf("EQUIPE RED BULL: %d votos.\n", r);
    printf("EQUIPE MERCEDES: %d votos.\n", m);
    printf("OUTRA EQUIPE: %d votos.\n", o);

    if(f > r && f > m && f > o){
        printf("\nA equipe Ferrari foi a mais privilegiada pelas novas regras.");
    }else if(r > f && r > m && r > o){
            printf("\nA equipe Red Bull foi a mais privilegiada pelas novas regras.");
        }else if(m > f && m > r && m > o){
                printf("\nA equipe Mercedes foi a mais privilegiada pelas novas regras.");
            }else if(o > f && o > r && o > m){
                    printf("\nOutra Equipe foi a mais privilegiada pelas novas regras.");
                }

    return 0;
}
