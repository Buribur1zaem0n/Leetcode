//Give a positive integer "n", find the central integer "x" that satisfies the following conditions.
//The sum of each elements between "x" and "n" is equl to the sum of each elements between "1" and "x".
//Return the central integer "x". if the central integer is no central integer exits return -1.
//The problem guarantees that there is at most one such central integer for the given input.

//*I have created a function to calculate the square root, you can use sqrt function from header math.h.*

int findsqrt (int n)
{
    if (n <= 0)  return 0;
    int left = 1;
    int right = n;
    int result = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (mid <=  n / mid)
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return result;
}



int pivotInteger(int n) 
{
int total = n * (n + 1) / 2;
int x = findsqrt(total);
if (x * x == total && x >= 1 && x <= n)  return x;
else  return -1;
}
