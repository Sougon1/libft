#include "libft.h"




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **split(const char *str, char delimiter, int *count) {
    char **result = NULL;
    *count = 0;
    int length = strlen(str);

    int start = 0;
    for (int i = 0; i <= length; i++) {
        if (str[i] == delimiter || str[i] == '\0') {
            result = (char **)realloc(result, (*count + 1) * sizeof(char *));
            result[*count] = (char *)malloc(i - start + 1);
            strncpy(result[*count], str + start, i - start);
            result[*count][i - start] = '\0';
            (*count)++;
            start = i + 1;
        }
    }

    return result;
}

int main() {
    const char *input = "apple,\0banana,cherry";
    char delimiter = '\0';
    int count;

    char **tokens = split(input, delimiter, &count);

    for (int i = 0; i < count; i++) {
        printf("Token %d: %s\n", i, tokens[i]);
        free(tokens[i]);
    }

    free(tokens);

    return 0;
}

