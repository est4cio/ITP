#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int acc;
    int cartas[100][5];
    int ct,x,y;

    printf("Digite o número de jogadas (Min.: 1 // Máx.: 100):\n");
    scanf("%d", &ct);

    for(x=0;x<ct;x++){
        printf("Digite as cartas:\n")
        for(y=0;y<5;y++){
            scanf("%d", &cartas[x][y]);
        }
    }

    return 0;


}