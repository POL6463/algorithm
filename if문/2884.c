#include <stdio.h>

int main(void)
{
    int H, M;

    scanf("%d%d", &H, &M);

    if (M < 45)
    {
        if (H == 0)
        {
            H = 23;
            M = 60 - (45 - M);
            printf("%d %d", H, M);
        }
        else
        {
            H = H - 1;
            M = 60 - (45 - M);
            printf("%d %d", H, M);

        }
    }
    else
    {
        M = M - 45;
        printf("%d %d", H, M);
    }

    return 0;
    
}