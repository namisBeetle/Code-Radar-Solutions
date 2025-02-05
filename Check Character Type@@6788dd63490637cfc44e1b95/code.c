#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || 
       a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        printf("Vowel\n");
    }else if(a >= '0' && a <= '9') {
        printf("Digit\n");
    }else if((a >= 32 && a <= 47) || (a >= 58 && a <= 64) || 
            (a >= 91 && a <= 96) || (a >= 123 && a <= 126)) {
        printf("Special Character\n");
    }else {
        printf("Consonant\n");
    }

    return 0;
}
