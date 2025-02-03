#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char a = 'A';
        for(int l=1;l<=n-i;l++){
            printf("%c ",a);
            a+=1;
        }
        printf("\n");
    }
    return 0;
}