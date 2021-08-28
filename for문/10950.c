#include <stdio.h>

int main(void)
{
    int i, n, a, b;
    

    scanf("%d", &n);
    int ary[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        ary[i] = (a + b);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", ary[i]);
    }
}