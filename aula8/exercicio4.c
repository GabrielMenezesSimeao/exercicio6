#include <stdio.h>
#include <string.h>
#include <ctype.h>

void limparString(char *str) {
    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (isalnum((unsigned char)str[i])) {
            str[j++] = tolower((unsigned char)str[i]);
        }
    }
    str[j] = '\0';
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;  // Remove a nova linha

    limparString(string);
    int len = strlen(string);
    int palindromo = 1;

    for (int i = 0; i < len / 2; i++) {
        if (string[i] != string[len - i - 1]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}
