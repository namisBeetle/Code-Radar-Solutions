#include <stdio.h>

int main() {
    int a, b;
    char c;
    
    // Read two integers and an operator
    scanf("%d %d %c", &a, &b, &c);
    
    // Switch case for different operators
    switch(c) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("error\n");
            } else {
                // Perform floating-point division
                printf("%.2f\n", (float)a / b);
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    
    return 0;
}
