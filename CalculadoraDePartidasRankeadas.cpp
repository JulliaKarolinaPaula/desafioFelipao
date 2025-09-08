#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

const char* rank(int a, int b, char* resultado, size_t tamanho){
    int calc = a - b;
    
    /*static char resultado[100];*/

    if(calc <= 10){
        snprintf(resultado,tamanho, "O heroi tem de saldo de %d e esta no nivel de Ferro", calc);
    }else if(calc > 10 && calc <= 20){
        snprintf(resultado,tamanho, "O heroi tem de saldo de %d e esta no nivel de Bronze", calc);
    }else if(calc > 20 && calc <= 50){
        snprintf(resultado,tamanho, "O heroi tem de saldo de %d e esta no nivel de Prata", calc);
    }else if(calc > 50 && calc <= 80){
        snprintf(resultado,tamanho, "O heroi tem de saldo de %d e esta no nivel de Ouro", calc);
    }else if(calc > 80 && calc <= 90){
        snprintf(resultado,tamanho, "O heroi tem de saldo de %d e esta no nivel de Diamante", calc);
    }else if(calc > 90 && calc <= 100){
        snprintf(resultado,tamanho, "O heroi tem de saldo de %d e esta no nivel de Lendario", calc);
    }else{
        snprintf(resultado,tamanho, "O heroi tem de saldo de %d e esta no nivel de Imortal", calc);
    }

    return resultado;
}

int main(){
    int v, d;
    char msg[100], rpt = 'S';

    do{
    printf("Insira o numero de vitorias: ");
    scanf("%d", &v);
    printf("Insira o numero de derrotas: ");
    scanf("%d", &d);

    printf("%s\n", rank(v,d, msg, sizeof(msg)));

        printf("\nDeseja visualizar o rank de outro jogador? S/N: ");
        scanf(" %c", &rpt);
        rpt = toupper(rpt);
    
    }while(rpt == 'S');

    return 0;
}