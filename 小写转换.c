#include <stdio.h>

int main() 
{
    char c;
    printf("请输入一个小写字母: ");
    scanf(" %c", &c);

    // a) 输出对应的大写字母
    printf("对应的大写字母是: %c\n", c - 32);

    // b) 输出其前导字母与后续字母
    printf("前导字母是: %c，后续字母是: %c\n", c - 1, c + 1);
    return 0;
}