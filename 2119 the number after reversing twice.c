//give you an integer num, reverse it to get reverse1, and reverse reverse1 to get reverse2, return true if reverse2 is equals num, otherwise return false.


//1.simple code
bool isSameAfterReversals(int num) 
{
return num % 10 != 0 || num == 0;
}


//2.normal code
bool isSameAfterReversals(int num) 
{
    if (num < 0) return 0;
    int reversed_1 = 0;
    int reversed_2 = 0;
    int num1 = num;
while (num > 0)
    {
        reversed_1 *= 10;
        reversed_1 += num % 10;
        num /= 10;
    }
 
while (reversed_1 > 0)
    {
        reversed_2 *= 10;
        reversed_2 += reversed_1 % 10;
        reversed_1 /= 10;
    }
    if (reversed_2 == num1) return true;
    else return false;
}
