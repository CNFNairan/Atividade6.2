#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);

    double *notas = malloc(n * sizeof(double));
    if (notas == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    double soma = 0;
    printf("Digite as notas: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &notas[i]);
        soma += notas[i];
    }
    printf("Média: %.2lf\n", soma / n);
    free(notas);
    return 0;
}