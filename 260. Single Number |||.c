//You are given an integer array nums, where exactly two elements appear once, and all the other elements appear twice. Find the two elements that appear once. You can return the answer in any order.
//You must design and implement an algorithm with linear time complexity and constant extra space.


int* singleNumber(int* nums, int numsSize, int* returnSize)
{
    int* ret;
    ret = (int*)malloc(2 * sizeof(int));
    if (!ret)
    {
        *returnSize = 0;
        return NULL;
    }
    int xor = 0;
    for (int i = 0; i < numsSize; i++)
    {
        xor ^= nums[i];
    }
    //Extract the lowest bit of the XOR result, where A and B must differ at this bit
    unsigned int diff = (unsigned int) xor & -(unsigned int) xor;
    int a = 0;
    int b = 0;
    for (int j = 0; j < numsSize; j++)
    {
        if (diff & (unsigned int)nums[j])
        {
            a ^= nums[j];
        }
        else
        {
            b ^= nums[j];
        }
    }
    ret[0] = a;
    ret[1] = b;
    *returnSize = 2;
    return ret;
}
