#include <stdlib.h>

int compare(const void *a, const void *b) {
    long long x = *(const int *)a;
    long long y = *(const int *)b;

    if (llabs(x) < llabs(y)) return -1;
    if (llabs(x) > llabs(y)) return 1;
    return 0;
}

long long maxAlternatingSum(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);

    long long score = 0;
    int half = numsSize / 2;

    for (int i = 0; i < half; i++) {
        long long x = nums[i];
        score -= x * x;
    }

    for (int i = half; i < numsSize; i++) {
        long long x = nums[i];
        score += x * x;
    }

    return score;
}