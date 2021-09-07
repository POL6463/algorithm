#include <stdio.h>
#include <math.h>

int main(void)
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);

    int n;
    if((C - B) <= 0)
    {
        printf("-1");
    }
    else
    {
        n = (A/(C-B)) + 1;

        printf("%d", n);
    }
    return 0;
}