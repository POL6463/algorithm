#include <stdio.h>

int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        int T = 0;
        j = 0;
        int k = 0;
        int count = 0;
        char ary_in[21] = {0};
        char ary_out[160] = {0};
        scanf("%d", &T);
        scanf("%s", ary_in);
        while (ary_in[j] != 0)
        {
            for(k = 0; k < T; k++)
            {
                ary_out[count] = ary_in[j];
                count++;
            }
            j++;
        }
        printf("%s\n", ary_out);
        
    }
    return 0;
}