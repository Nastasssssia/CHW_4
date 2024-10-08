#include <stdio.h>

// Ввести натуральное число и напечатать все числа от 10 до введенного числа -
// у которых сумма цифр равна произведению цифр
int main(void)
{
    int n;
    printf("Введите число больше 10: ");
    scanf("%d", &n);

    for (int i = 10; i <= n; i++)
    {
        int num = i;
        int sum = 0, product = 1;
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit;     // Суммируем цифры
            product *= digit; // Умножаем цифры
            num /= 10;        // Убираем последнюю цифру
        }

        if (sum == product)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
