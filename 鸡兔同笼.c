#include <stdio.h>

int main() 
{
    int h, f;
    int chicken, rabbit;
    printf("请输入鸡兔总头数h: ");
    scanf("%d", &h);
    printf("请输入总脚数f: ");
    scanf("%d", &f);

    rabbit = (f - 2 * h) / 2;
    chicken = h - rabbit;

    printf("鸡有%d只，兔有%d只\n", chicken, rabbit);
    return 0;
}