#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b;
    bool res = a>b;
    scanf("%d %d",&a,&b);
    if(res){
        printf("True");
    }else{
        printf("False")
    }
    return 0;
}