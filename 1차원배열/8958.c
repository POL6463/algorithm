#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j;
    
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        int result = 0;
        int counter = 0;
        char ary[80] = { 0 };
        scanf("%s", ary);

        for(j = 0; ary[j] != NULL; j++)
        {
            if(ary[j] == 'X')
            {
                counter = 0;
            }
            else if(ary[j] == 'O')
            {
                counter++;
                result += counter;
            }
        }

        printf("%d\n", result);

    }

    return 0;
    

}