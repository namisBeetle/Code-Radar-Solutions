#include <stdio.h>

int main() {
    int n;
    char a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            a+=1;
            printf("%c ",a);
        }
        printf("\n");
    }
    return 0;
}