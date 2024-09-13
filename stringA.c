#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, count_a = 0, count_A = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; i < strlen(string); i++) {
        if (string[i] == 'a') {
            count_a++;  
        } else if (string[i] == 'A') {
            count_A++; 
        }
    }
    printf("A letra 'a' minúscula aparece %d vezes.\n", count_a);
    printf("A letra 'A' maiúscula aparece %d vezes.\n", count_A);

    return 0;
}
