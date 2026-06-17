//give a integer array "nums", return the count of numbers that contain an even number of digits.


//1. Fastest solution
int findNumbers(int* nums, int numsSize) {
    int ans = 0;
    for (int i = 0; i < numsSize; ++i) {
        char str[16];
        sprintf(str, "%d", nums[i]);
        if (strlen(str) % 2 == 0) {
            ans++;
        }
    }
    return ans;
}


//2. Brute force
int findNumbers(int* nums, int numsSize) 
{
	int count = 0;
	for (int i = 0; i < numsSize; i++)
	{
        int j = 0;
        int num = nums[i];
        while (num > 0)
        {
            num /= 10;
            j++;
        }
		if (j % 2 == 0)  count++;
	}
	return count;
}
