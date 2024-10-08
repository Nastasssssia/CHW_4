#include <stdio.h>
// Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a
// до b.

int main(void)
{

    int a, b;
    printf("Введите 2 числа а и b, где а <= b: ");
    scanf("%d%d", &a, &b);
    int sum;

    for (int i = a; i <= b; i++)
    {
        sum += i * i;
    }
    printf("%d\n", sum);
    return 0;
}