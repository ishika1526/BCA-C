#include <stdio.h>
int main()
{
    char name[50];
    int units;
    float bill;

    printf("Enter consumer name: ");
    scanf("%s", &name);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units <= 100)
        bill = units * 1.5;
    else if(units <= 200)
        bill = (100 * 1.5) + (units - 100) * 2;
    else
        bill = (100 * 1.5) + (100 * 2) + (units - 200) * 3;

    printf("\nConsumer Name: %s", name);
    printf("\nUnits Consumed: %d", units);
    printf("\nTotal Bill Amount: Rs. %.2f", bill);

    return 0;
}