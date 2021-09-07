#include <stdio.h>
#include <math.h>

int main(void)
{
    int N, i;
    int n = 1;
    scanf("%d", &N);
    int total = 1;
    

    // if(n == 0)
    // {
    //     if (N > 1)
    //     {
    //         n++;
    //     }
    // }
    

    for(i = 1; total < N; i++)
    {
        total += (6 * n);
        n++;
    }
    

    printf("%d\n", n);
    

    return 0;
}