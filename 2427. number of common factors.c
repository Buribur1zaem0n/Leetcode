//Give two positive integer "a"" and b", return the number of common factors of "a"" and b".
//A number 'x' is considered common factor of 'a' and 'b' if 'x' can divides both 'a' and 'b' without leaving remainder.


static int gcd(int a, int b)
{
    while (b)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}


static int divisorCount(int n)
{
    int count = 0;
    int i;
    for (i = 1; i <= n / i; ++i)
    {
        if (n % i == 0)
        {
            count++;
            if (i != n / i)
                count++;
        }
    }
    return count;
}


int commonFactors(int a, int b)
{
    if (a <= 0 || b <= 0)
        return 0;
    return divisorCount(gcd(a, b));
}
