#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, sum;
    printf("请输入一个三位数: ");
    scanf("%d", &num);

    digit1 = num / 100;
    digit2 = (num / 10) % 10;
    digit3 = num % 10;

    sum = digit1 * digit1 + digit2 * digit2 + digit3 * digit3;

    printf("每位数字的平方和是%d\n", sum);
    return 0;
}