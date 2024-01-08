#include <stdio.h>
#include <stdlib.h>

int factorial (int num)
{
    int i;
    int result = 1;
    if (num<0)
        return -1;
    for (i=1;i<=num;i++)
    {
        result = result*i;
    }
    return result;
}

int main()
{
    int myNum;
    printf("Please insert a number:");
    scanf("%d", &myNum);
    printf("Factorial(%d) = %d\n", myNum, factorial(myNum));

    return 0;
}
