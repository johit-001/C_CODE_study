#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;
    printf("请输入三角形三边a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a + b + c) * 0.5;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("三角形的面积是%lf\n", area);
    return 0;
}