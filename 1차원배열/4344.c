#include <stdio.h>

int main(void)
{
    int C;
    int N;
    int i, j;
    int total;
    double average;
    double per;
    

    scanf("%d", &C);
    for(i = 0; i < C; i++)
    {
        per = 0;
        scanf("%d", &N);
        int ary[N];
        int counter = 0;
        total = 0;

        for(j = 0; j < N; j++)
        {
            scanf("%d", &ary[j]);
            total += ary[j];
        }

        average = total / (double) N;

        for(j = 0; j < N; j++)
        {
            if (ary[j] > average)
            {
                counter++;
            }
        }

        per = (counter / (double) N) * 100;
        
        printf("%.3lf%%\n", per);


    }

    return 0;
}