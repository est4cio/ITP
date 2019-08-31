#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int case1 (int a){
    a=a+50;
}

int main(){
    int jg[100][5];
    int t,i,j,b;
    b = 0;
    /*int a[100] = {};*/

    scanf("%d", &t);

    for(i=0;i<t;i++){
        for(j=0;j<5;j++){
            scanf("%d",&jg[i][j]);
            if(j==0){
                b=jg[i][j];
            }
            if(jg[i][j]==jg[i][j-1]+1){
                case1(b);
            }
        }
    printf("Teste %d\n", i+1);
    printf("%d", b);
    printf("\n");
    printf("\n");
    }

    return 0;
}