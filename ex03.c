#include <stdio.h>
#include <stdlib.h>

int *cria_sequencia(int n) {
    int *v = malloc(n * sizeof(int));
    if (v == NULL) return NULL;
    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }
    return v;
}

int main(void) {
    int *seq = cria_sequencia(5);
    if (seq != NULL) {
        for (int i = 0; i < 5; i++) {
            printf("%d ", seq[i]);
        }
        free(seq);
    }
    return 0;
}