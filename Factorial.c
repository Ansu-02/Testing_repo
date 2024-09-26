#include<stdio.h>

int facto(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}

int main()
{
    // Thid is a new feature(GCD of two numbers)
    int num;
    printf("Enter a number\n");
    scanf("%d", num);
    int result = facto(num);
    printf("The factorial of %d is %d\n", num, result);
    return 0;
}