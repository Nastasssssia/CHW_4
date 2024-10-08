#include <stdio.h>

// Ввести целое число и «перевернуть» его, так чтобы первая цифра стала
// последней и т.д

int main(void)
{
    int num, reversed = 0, digit;

    printf("Введите целое число: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    printf("%d\n", reversed);

    return 0;
}
