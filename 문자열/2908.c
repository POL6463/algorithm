#include <stdio.h>
#include <math.h>

int main(void)
{
    char first[5] = {0};
    char second[5] = {0};
    int fir[5] = {0};
    int sec[5] = {0};
    int temp = 0;
    int i;

    for(i = 0; i < 4; i++)
    {
        scanf("%c", &first[i]);
    }
    for(i = 0; i < 3; i++)
    {
        scanf("%c", &second[i]);
    }

    for(i = 0; i < 3; i++)
    {
        temp += (((int)first[i] - '0') * (int)pow(10, i));
    }
    fir[0] = temp;

    temp = 0;
    for(i = 0; i < 3; i++)
    {
        temp += (((int)second[i] - '0') * (int)pow(10, i));
    }
    sec[0] = temp;


    if(fir[0] > sec[0])
    {
        printf("%d", fir[0]);
    }
    else printf("%d", sec[0]);


    return 0;
}