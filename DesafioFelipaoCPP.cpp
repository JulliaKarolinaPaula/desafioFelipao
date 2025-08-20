#include <stdio.h>
#include <string.h>

int main(){
    int n = 1;
    while(n == 1){
        char nome[10], nivel[20];
        int xp;
        printf("Digite o nome do heroi: ");
        scanf("%[^\n]%*c", nome);
        printf("Digite o XP: ");
        scanf("%d", &xp);

        if(xp <= 1000){
            strcpy(nivel, "Ferro");
        } else if(xp > 1000 && xp <= 2000){
            strcpy(nivel, "Bronze");
        } else if(xp > 2000 && xp <= 5000){
            strcpy(nivel, "Prata");
        } else if(xp > 5000 && xp <= 7000){
            strcpy(nivel, "Ouro");
        } else if(xp > 7000 && xp <= 8000){
            strcpy(nivel, "Platina");
        } else if(xp > 8000 && xp <= 9000){
            strcpy(nivel, "Ascendente");
        } else if(xp > 9000 && xp <= 10000){
            strcpy(nivel, "Imortal");
        } else{
            strcpy(nivel, "Radiante");
        }

        printf("O heroi de nome %s esta no nivel %s", nome, nivel);

        printf("\nDigite '0' para sair!\n Ou '1' para continuar!\n");
        scanf("%d%*c", &n);
    }
    return 0;
}