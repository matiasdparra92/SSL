#include <stdio.h>

int main() {
    FILE *outputFile = fopen("Output.txt", "w");

    if (outputFile == NULL) {
        fprintf(stderr, "Error al abrir el archivo output.txt\n");
        return 1;
    }
    const char *msg[] = {"Hello", "world"};

    for (int i = 0; i < sizeof(msg) / sizeof(msg[0]); ++i) {
        fprintf(outputFile, "%s ", msg[i]);
    }

    fprintf(outputFile, "\n");

    fclose(outputFile);

    printf("Se ha escrito correctamente en el archivo output.txt\n");

    return 0;
}
