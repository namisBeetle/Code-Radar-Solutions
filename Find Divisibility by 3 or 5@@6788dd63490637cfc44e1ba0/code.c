#include <stdio.h>

int main(){

    if(i%5==0 && i%3==0){
        printf("Divisible by Both");
    }else if(i%3==0){
        printf("Divisible by 3");
    }else if(i%5==0){
        printf("Divisible by 5");
    }else if(!(i%3==0 && i%5==0)){
        printf("Not Divisible");
    }

    return 0;
}
