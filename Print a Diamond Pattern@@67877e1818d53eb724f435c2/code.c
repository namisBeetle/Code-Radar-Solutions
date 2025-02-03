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
        printf("\n");
    }

    for(int x=1;x<=n;x++){
        for(int m=0;m<x;m++){
            printf(" ");
        }
        for(int o=0;o<n-x;o++){
            printf("**");
        }
        printf("\n");
    }
    return 0;
}