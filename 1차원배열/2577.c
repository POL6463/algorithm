#include <stdio.h>

int main(void)
{
    int x, y, z;
    int n;
    scanf("%d%d%d", &x, &y, &z);
    n = (x * y * z);
    int digits = 0;
    int i;
    int m = n;

    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    int counter4 = 0;
    int counter5 = 0;
    int counter6 = 0;
    int counter7 = 0;
    int counter8 = 0;
    int counter9 = 0;
    int counter0 = 0;


    
    while (m)
    {
        digits++;
        m /= 10;
    }

    char ary[digits];

    for (i = 0; i < digits; i++)
    {
        ary[i] = (n % 10) + '0';
        n /= 10;
    }

    for (i = 0; i < digits; i++)
    {
        if(ary[i] == '1')
        {
            counter1++;
        }
        if(ary[i] == '2')
        {
            counter2++;
        }
        if(ary[i] == '3')
        {
            counter3++;
        }
        if(ary[i] == '4')
        {
            counter4++;
        }
        if(ary[i] == '5')
        {
            counter5++;
        }
        if(ary[i] == '6')
        {
            counter6++;
        }
        if(ary[i] == '7')
        {
            counter7++;
        }
        if(ary[i] == '8')
        {
            counter8++;
        }
        if(ary[i] == '9')
        {
            counter9++;
        }
        if(ary[i] == '0')
        {
            counter0++;
        }
        
    }

    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", counter0, counter1, counter2, counter3, counter4, counter5, counter6, counter7, counter8, counter9);

    return 0;
    
}