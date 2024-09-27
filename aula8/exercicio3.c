#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;  // Remove a nova linha

    int len = strlen(string);

    printf("String invertida: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(string[i]);
    }
    putchar('\n');

    return 0;
}
