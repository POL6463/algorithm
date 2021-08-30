#include <stdio.h>

int main(void)
{
    int i, j;
    int n;
    int ary[10] = {0};
    int counter = 0;
    int check = 0;
    int is0 = 0;
    

    for (i = 0; i < 10; i++)
    {
        check = 0;
        scanf("%d", &n);
        for (j = 0; j < i; j++)
        {
            if((n % 42) == ary[j])
            {
                check = 1;
            }
        }

        if (n % 42 == 0 && is0 == 0)
        {
            is0 = 1;
            counter++;
        }
        else if (check == 0)
        {
            ary[i] = (n % 42);
            counter++;
        }
    }

    printf("%d\n", counter);

    return 0;
}