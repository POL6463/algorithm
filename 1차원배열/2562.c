#include <stdio.h>

int main(void)
{
    int ary[9];
    int i;
    int max = 0;
    int count = 0;

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &ary[i]);
    }

    for (i = 0; i < 9; i++)
    {
        if (ary[i] > max)
        {
            max = ary[i];
            count = i + 1;
        }
    }

    printf("%d\n%d\n", max, count);

    return 0;
}