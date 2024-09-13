#include <stdio.h>

int pertence_fibonacci(int numero) {
    int a = 0, b = 1, temp;

    if (numero == 0 || numero == 1) {
        return 1; // 0 e 1 pertencem à sequência
    }
 
    while (b <= numero) {
        if (b == numero) {
            return 1; 
        }
        temp = b;
        b = a + b;
        a = temp;
    }

    return 0; 
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (pertence_fibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
