#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int l=n;l>0;l--){
            printf("%c ",l);
        }
        printf("\n");
    }
    return 0;
}