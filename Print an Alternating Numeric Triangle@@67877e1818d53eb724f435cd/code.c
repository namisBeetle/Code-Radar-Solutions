#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int l=i;l>0;l--){
            if(l==1){
                printf("%d ",l);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}