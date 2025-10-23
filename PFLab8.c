#include <stdio.h>
int main(){
    int i,j;
    for (i = 1; i <= 5; i++){
        for (j = 1; j <= i; j++){
            printf("%d", i); 
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int i, j, n = 10;
    printf("Multiplication Table\n");
    printf("    ");
    for (i = 1; i <= n; i++) printf("%4d", i);
    printf("\n");
    for (i = 1; i <= n; i++) printf("----");
    printf("\n");
    for (i = 1; i <= n; i++) {
        printf("%3d|", i);           
        for (j = 1; j <= n; j++) {
            printf("%4d", i * j);    
        }
        printf("\n");
    }

    return 0;
}

