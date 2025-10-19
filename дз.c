#include <stdio.h>

int main() 
{
    int a, b;

    printf("Введите номер команды A: ");
    scanf("%d", &a);
    printf("Введите номер команды B: ");
    scanf("%d", &b);

    if ((a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0))
        printf("Право первого хода получает команда A.\n");
    else
        printf("Право первого хода получает команда B.\n");

    return 0;
}