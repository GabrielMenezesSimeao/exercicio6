#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char senha[101];
    int temNumero = 0, temMaiuscula = 0, temMinuscula = 0;

    printf("Digite uma senha (8 a 100 caracteres): ");
    fgets(senha, sizeof(senha), stdin);
    senha[strcspn(senha, "\n")] = 0;  // Remove a nova linha

    int len = strlen(senha);

    if (len < 8 || len > 100) {
        printf("A senha deve ter entre 8 e 100 caracteres.\n");
        return 1;
    }

    for (int i = 0; i < len; i++) {
        if (isdigit(senha[i])) temNumero = 1;
        if (isupper(senha[i])) temMaiuscula = 1;
        if (islower(senha[i])) temMinuscula = 1;
    }

    if (temNumero && temMaiuscula && temMinuscula) {
        printf("Senha válida.\n");
    } else {
        printf("A senha deve conter pelo menos um número, uma letra maiúscula e uma letra minúscula.\n");
    }

    return 0;
}
