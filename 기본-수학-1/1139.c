#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    int x = n;

    for(i = 1; x >= i; i++)
    {
        x -= i;
        if(x == 0)
        {
            i--;
        }
    }
    int first, second;

    if((i % 2) == 0)
    {
        if(x != 0)
        {
            first = x;
        }
        else first = i;

        if(x != 0)
        {
            second = (i + 1) - x;
        }
        else second = 1;
    }
    else
    {
        if(x != 0)
        {
            first = (i + 1) - x;
        }
        else first = 1;

        if(x != 0)
        {
            second = x;
        }
        else second = i;
    }

    printf("%d/%d\n", first, second);
    return 0;
}