#include <stdio.h>

int comp_d(int a)
{
    int i;
    
    int x;
    int sum;
    for (i = 1; i < a; i++)
    {
        
        sum = i;
        x = i;
        while (x > 0)
        {
            sum += (x % 10);
            x /= 10;
        }

        if(sum == a)
        {
            return 0;
            break;
        }
        
    }
    return 1;
}

int main(void)
{
    int i;
    int res;
    
    for ( i = 1; i <= 10000; i++)
    {
        res = 0;
        res = comp_d(i);
        if(res == 1)
        {
            printf("%d\n", i);
        }
        
    }

    return 0;
}