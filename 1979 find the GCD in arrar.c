//give an integer array nums, return the GCD of maxmam and minimam numbers int the array.
//The greatest common divisor(GCD) of two numbers is the largest positive integer that can divide both numbers without leaving a remainder.


//1. Brute force
int findGCD(int* nums, int numsSize) {
    if (nums == NULL || numsSize <= 0) return 0;
    int max = nums[0];
    int min = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] > max) max = nums[i];
        if (nums[i] < min) min = nums[i];
    }
    int gcd = 0;
    for (int i = 1; i <= min; i++)
    {
        if (max % i == 0 && min % i == 0)
            gcd = i;
    }
    return gcd;
}


//2. Euclidean algorithm
int gcd(int a, int b) 
{
    while (b) 
    {
        int t = a % b;
        a = b; 
        b = t;
    }
    return a;
}

int findGCD(int* nums, int numsSize) 
{
    int min = 1001;
    int max = 0;
    for (int i = 0; i < numsSize; i++ ) 
    {
        if (nums[i] < min) min = nums[i];
        if (nums[i] > max) max = nums[i];
    }
    return gcd(min, max);
}
