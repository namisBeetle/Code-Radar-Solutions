#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=0;k<n;k++){
            printf("* ");
        }
        for(int j=1;j<n;j++){
            printf(" ")
        }
        printf("\n");
    }
    return 0;
}