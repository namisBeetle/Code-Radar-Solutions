#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    bool res = a>=b;

    if(res){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}