#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    int i, j, k, l;
    int res;
    

    scanf("%d%d", &a, &b);
    char ary[a][b];
    char aryw[8][8] = {
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
    };
    char aryb[8][8] = {
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
        {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
        {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}
    };
    int comp_w;
    int comp_b;
    int comp = 32;

    for (i = 0; i < a; i++)
    {
        scanf("%s", ary[i]);  
    }

    



    
    
    for (i = 8; i <= a; i++)
    {
        for (j = 8; j <= b; j++)
        {
            comp_w = 0;
            comp_b = 0;

            for (k = (i - 8); k < i; k++)
            {
                for (l = (j - 8); l < j; l++)
                {
                    if(ary[k][l] != aryw[k - (i - 8)][l - (j - 8)])
                    {
                        comp_w++;
                        
                    }
                    if(ary[k][l] != aryb[k - (i - 8)][l - (j - 8)])
                    {
                        comp_b++;
                    }
                }
                
                
            }
            

            if (comp_w < comp_b && comp_w < comp)
            {
                comp = comp_w;
            }
            else if (comp_b < comp)
            {
                comp = comp_b;
            }
        }
    }
    
    

    printf("%d\n", comp);

    return 0;
}