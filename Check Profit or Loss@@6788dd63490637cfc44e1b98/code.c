#include <stdio.h>

int main() {
    int c,s;
    printf("%d %d",&c,&s);
    if(c<s){
        printf("Profit");
    }else if(c>s){
        printf("Loss");
    }
    return 0;
}