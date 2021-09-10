#include <stdio.h>

int main(void)
{
    int N, i;
    scanf("%d", &N);
    int small, big;
    int res = 0;

    for(i = 0; i <= (N/3); i++)
    {
        if((N - (3*i))%5 == 0)
        {
            res = 1;
            small = i;
            big = ((N-(3*i))/5);
            break;
        }
    }
    if(res == 0)
    {
        printf("-1");
    }
    else 
    {
        printf("%d", small+big);
    }
    return 0;

    
}