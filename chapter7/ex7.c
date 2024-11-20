#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char ch;

    printf("Enter two fraction entered by a ( + - * /) sign: ");
    scanf("%d/%d", &num1, &denom1);

    getchar();
    ch = getchar();

    scanf("%d/%d", &num2, &denom2);

    switch (ch)
    {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The addition is: %d/%d", result_num, result_denom);
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            printf("The subtraction is: %d/%d", result_num, result_denom);
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            printf("The multiplication is: %d/%d", result_num, result_denom);
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = denom1 * num2;
            printf("The divide is: %d/%d", result_num, result_denom);
    }


    return 0;
}