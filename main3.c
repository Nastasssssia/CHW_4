#include <stdio.h>

// Ввести целое число и определить, верно ли, что все его цифры четные

int main(void)
{
    int num, digit;
    int is_all_even = 1;

    printf("Введите число: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
        {
            is_all_even = 0;
            break;
        }
        num /= 10;
    }

    if (is_all_even)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}