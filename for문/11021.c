#include <stdio.h>

int main(void)
{
    int i, n;
    int a, b;

    scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
        scanf("%d%d", &a, &b);
        printf("Case #%d: %d\n", i, a+b);
    }

    return 0;
}