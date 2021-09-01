#include <stdio.h>

long long sum(int *a, int n)
{
    int res;
    int i;
    
    for (i = 0; i < n; i++)
    {
        res += a[i];
    }

    return res;
}

int main(void)
{

}