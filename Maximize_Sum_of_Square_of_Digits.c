
#include <stdlib.h>

char* maxSumOfSquares(int num, int sum) {
    if (sum > 9 * num || sum == 0)
        return "";

    char *result = (char*)malloc((num + 1) * sizeof(char));
    int i = 0;

    while (sum >= 9) {
        result[i++] = '9';
        sum -= 9;
    }

    if (sum > 0) {
        result[i++] = '0' + sum;
    }

    while (i < num) {
        result[i++] = '0';
    }

    result[i] = '\0';
    return result;
}