//given a positive integer "nums", return an array "answer", where you split each integer into its individual digits and place them in the answer array in the same order they appear in nums.

int* separateDigits(int* nums, int numsSize, int* returnSize) {
    if (nums == NULL || numsSize <= 0) {
        *returnSize = 0;
        return NULL;
    }
    int totalDigits = 0;
    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];
        if (x == 0) {
            totalDigits++;
        } else {
            while (x != 0) {
                totalDigits++;
                x /= 10;
            }
        }
    }
    int* res = (int*)malloc(totalDigits * sizeof(int));
    if (res == NULL) {
        *returnSize = 0;
        return NULL;
    }
    int index = 0;
    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];
        
        int digits = 0;
        int temp = x;
        if (temp == 0) {
            digits = 1;
        } else {
            while (temp != 0) {
                digits++;
                temp /= 10;
            }
        }
        
        int writePos = index + digits - 1;
        if (x == 0) {
            res[index] = 0;
        } else {
            while (x != 0) {
                res[writePos--] = x % 10;
                x /= 10;
            }
        }
        index += digits;
    }
    *returnSize = totalDigits;
    return res;
}
