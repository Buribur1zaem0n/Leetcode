//There is a programming language that supports only 4 operations and 1 variable X:

//++X and X++ increment the value of X by 1.

//--X and X-- decrement the value of X by 1.

//Initially, the value of X is 0.

//You are given a string array operations, which is a list of operations. Return the final value of X after executing all the operations.


//1. eazy read
int finalValueAfterOperations(char** operations, int operationsSize) 
{
    if (*operations == NULL || operationsSize <= 0)  return 0;
    int x = 0;
    for (int i = 0;i < operationsSize;i++)
    {
        if (operations[i][1] == '+')  x++;
        else  x--;
    }
    return x;
}


//2. 0 branch
int finalValueAfterOperations(char** operations, int operationsSize)
{
    if (operations == NULL || operationsSize <= 0)
    {
        return 0;
    }
    int x = 0;
    for (int i = 0; i < operationsSize; i++)
    {
        //ASCII: '+' = 43, '-' = 45.  44 - char yields +1 or -1. 
        x += (44 - operations[i][1]);
    }
    return x;
}
