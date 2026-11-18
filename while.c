#include <stdio.h>
int sum(int n)
{
    int s = 0, r;

    while(n > 0)
    {
        r = n % 10;
        s = s + r;
        n = n / 10;
    }

    return s;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum of digits = %d", result);

    return 0;
}