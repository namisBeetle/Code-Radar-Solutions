#include <stdio.h>

int main() {
    char a;
    scanf("%c",a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        printf("Vowel");
    }else if(a=='1'||a=='2'||a=='3'a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9'||a=='0'){
        printf("Digit");
    }else if(a>31 && a<65 && a>90 && a<97 && a>122){
        printf("Special Character");
    }else{
        printf("Consonant");
    }
    return 0;
}