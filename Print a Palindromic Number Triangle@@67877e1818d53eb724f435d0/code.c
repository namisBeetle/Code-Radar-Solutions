#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("%d",k);
        }
        for(int l=i;l>1;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}