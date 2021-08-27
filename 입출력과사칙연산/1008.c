#include <stdio.h>

int main(void)
{
    int a;
    int b;
    double res;

    scanf("%d%d", &a, &b);
    res = (a / (double)b);
    printf("%.9f\n", res);

    return 0;
}