int sumOfSquares(int* nums, int numsSize) {
int sum = 0;
int n = numsSize;

for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
        sum += nums[i - 1] * nums[i - 1];
    }
}

return sum;

}