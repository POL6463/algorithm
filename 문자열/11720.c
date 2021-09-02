#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    char ary[100] = {0,};
    
    
    scanf("%s", ary);

    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += ((ary[i]) - '0');
    }

    printf("%d", sum);

    return 0;
}