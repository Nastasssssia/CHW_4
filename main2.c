#include <stdio.h>
#include <math.h>

// Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

int main(void)
{

    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    num = abs(num);

    if (num >= 100 && num < 1000)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}