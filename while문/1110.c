#include <stdio.h>

int main(void)
{
    int a, b;
    int first, second;
    int counter = 1;

    scanf("%d", &a);
    
    b = a;
    if (a < 10)
    {
        first = a * 10;
        second = a;
        a = first + second;
    }
    else
    {
        first = a / 10;
        second = a % 10;
        a = second * 10 + ((first + second) % 10);
    }

    while (a != b)
    {
        if (a < 10)
        {
            first = a * 10;
            second = a;
            a = first + second;
        }
        else
        {
            first = a / 10;
            second = a % 10;
            a = second * 10 + ((first + second) % 10);
        }
        counter++;
    }

    printf("%d", counter);

    return 0;
    
}