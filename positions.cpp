#include<stdio.h>
int main(){
    int quant[6][2];
    int campo[2];
    int inimigos[6][2];
    int jogadores[6][2];
    int i=0,j=0;
    int part,div;

    part=0;
    div=campo[0]/6;

    for(j=0;j<6;j++){ 
        for(i=0;i<2;i++){
            quant[j][i]=0;
        }
    }

    for(j=0;j<6;j++){ 
        for(i=0;i<6;i++){
            if(jogadores[i][0]<=part+div && jogadores[i][0]>part){
                quant[j][0]+=1;
                }
            if(inimigos[i][0]<=part+div && inimigos[i][0]>part){
                quant[j][1]+=1;
                }
        }
        part+=div;
    }
    printf("\nTime");
    for(j=0;j<6;j++){
        printf("\n%d",quant[j][0]);
    }
    printf("\nInimigo");
    for(j=0;j<6;j++){
        printf("\n%d",quant[j][1]);
    }
    return 0;
}
