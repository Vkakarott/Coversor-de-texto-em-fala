#include <stdio.h>
#include <stdlib.h>

int main() {
    char texto[1000];
    
    printf("Digite o texto que deseja converter em fala: ");
    fgets(texto, sizeof(texto), stdin);

    char comando[3000];
    snprintf(comando, sizeof(comando), "espeak -v mb/mb-br1 \"%s\"", texto);

    system(comando);

    return 0;
}