#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("*");
        }
        for(int l=1;l<i;l++){
            printf("*");
        }
        for(int m=0;m<i;m++){
            printf(" ");
        }
        for(int n=0;n<n-i;n++){
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}