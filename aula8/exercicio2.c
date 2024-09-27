#include <stdio.h>
#include <string.h>

int calcularTamanhoSemStrlen(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;  // Remove a nova linha

    int tamanho1 = strlen(string);
    int tamanho2 = calcularTamanhoSemStrlen(string);

    printf("Tamanho usando strlen: %d\n", tamanho1);
    printf("Tamanho sem usar strlen: %d\n", tamanho2);
    printf("Os tamanhos são %s.\n", (tamanho1 == tamanho2) ? "iguais" : "diferentes");

    return 0;
}
