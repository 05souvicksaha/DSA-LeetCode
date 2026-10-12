#include <stdlib.h>

#define MOD 1000000007LL

long long maxSum(int* nums, int numsSize, int k) {
long long bitCount[32] = {0};

for (int i = 0; i < numsSize; i++) {
    for (int b = 0; b < 32; b++) {
        if ((nums[i] >> b) & 1) {
            bitCount[b]++;
        }
    }
}

long long ans = 0;

for (int i = 0; i < k; i++) {
    long long num = 0;

    for (int b = 0; b < 32; b++) {
        if (bitCount[b] > 0) {
            num |= (1LL << b);
            bitCount[b]--;
        }
    }

    ans = (ans + num * num) % MOD;
}

return ans;

}