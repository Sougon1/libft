#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *substr(const char *src, int start, int length) {
    if (src == NULL || start < 0 || length <= 0) {
        return NULL;
    }

    int src_len = strlen(src);

    if (start >= src_len) {
        return NULL;
    }

    // Limiter la longueur au maximum possible
    if (start + length > src_len) {
        length = src_len - start;
    }

    // Allouer de la mémoire pour la sous-chaîne
    char *sub = (char *)malloc(length + 1);

    if (sub == NULL) {
        return NULL;
    }

    // Utiliser memcpy pour copier la mémoire de la sous-chaîne
    memcpy(sub, src + start, length);
    sub[length] = '\0'; // Terminer la sous-chaîne

    return sub;
}

int main() {
    const char *source = "Hello, World!";
    int start = 7;
    int length = 5;

    char *result = substr(source, start, length);

    if (result != NULL) {
        printf("Chaîne source : %s\n", source);
        printf("Sous-chaîne : %s\n", result);
        free(result);
    } else {
        printf("Extraction de la sous-chaîne impossible.\n");
    }

    return 0;
}

