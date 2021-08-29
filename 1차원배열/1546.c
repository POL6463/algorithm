#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int max = 0;
    double total;
    double result;

    scanf("%d", &n);
    double ary[n];

    for(i = 0; i < n; i++)
    {
        scanf("%lf", &ary[i]);

        if(i == 0)
        {
            max = 0;
        }
        else if (ary[i] > ary[max])
        {
            max = i;
        }
    }
    max = (int)ary[max];



    total = 0;

    for (i = 0; i < n; i++)
    {
        ary[i] = (ary[i] / (double)max * 100.0);
        total += ary[i];
    }
    

    printf("%lf", total/n);

    return 0;
}