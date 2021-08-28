#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int ary[n];
    int i;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }

    int max = -1000000, min = 1000000;

    for (i = 0; i < n; i++)
    {
        if (ary[i] > max)
        {
            max = ary[i];
        }
        if (ary[i] < min)
        {
            min = ary[i];
        }
    }

    printf("%d %d\n", min, max);

    return 0;
}