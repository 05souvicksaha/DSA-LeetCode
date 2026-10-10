bool isGood(int* nums, int numsSize) {
int n = numsSize - 1;
int freq[n + 1];

for (int i = 0; i <= n; i++) {
    freq[i] = 0;
}

for (int i = 0; i < numsSize; i++) {
    if (nums[i] < 1 || nums[i] > n) {
        return false;
    }

    freq[nums[i]]++;
}

for (int i = 1; i < n; i++) {
    if (freq[i] != 1) {
        return false;
    }
}

return freq[n] == 2;

}
