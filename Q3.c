#include <stdio.h>
int main(){
    int imagedetails[4][4]={
        1,0,1,0,0,1,0,1,1,1,0,0,0,0,1,1
    };
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf(" %d ",imagedetails[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if (imagedetails[i][j]){
                imagedetails[i][j]=0;
                printf(" %d ",imagedetails[i][j]);
            }
            else {
                imagedetails[i][j]=1;
                printf(" %d ",imagedetails[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}