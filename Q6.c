#include <stdio.h>

int main(){
    printf("\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            for (int k = i*2; k <= 10; k++){
                printf(" ");
            }
            for (int k = 0; k <= i; k++){
                printf(" ");
                if (j==0) printf("*");
                else if (j==1) printf("%d",k+1);
                else printf("%c",65+k);
            }
         if(j!=2) printf("  |");
        }
        printf("\n");
        
    }
    return  0;

}