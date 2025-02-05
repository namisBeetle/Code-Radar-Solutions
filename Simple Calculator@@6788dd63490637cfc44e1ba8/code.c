#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%d %d %d",&a,&b,&c);
    switch(c){
        case'+':
            printf("%d",a+b);
            break;
        case'-':
            printf("%d",a-b);
            break;
        case'*':
            printf("%d",a*b);
        case"/":
            if(a==0){
                printf("error");
            }else{
                printf("%.2f",a/b);
            }
    }
    return 0;
}