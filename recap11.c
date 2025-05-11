#include <stdio.h>
#include <stdlib.h>

char *word(char **matrix, int n) {
    char *result = (char *)malloc((n + 1) * sizeof(char));
    for (int i = 0; i < n; i++) {
        result[i] = matrix[i][i];
    }
    result[n] = '\0';
    return result;
}

