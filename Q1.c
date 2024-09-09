#include <stdio.h>

int Q1(int n) {
    int a = 0, b = 1, temp;
    if (n == 0 || n == 1) return 1; 
    while (b < n) {
        temp = b;
        b = a + b;
        a = temp;
    }
    return b == n;  
}

int main() {
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);
    
    if (Q1(num)) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }
    
    return 0;
}
