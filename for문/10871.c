#include <stdio.h>

int main(void)
{
    int n, x;
    scanf("%d%d", &n, &x);
    int ary[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    for (i = 0; i < n; i++)
    {
        if(ary[i] < x)
        {
            printf("%d ", ary[i]);
        }
    }

    return 0;
}