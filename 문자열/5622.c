#include <stdio.h>
#include <string.h>

int main(void)
{
    char dial[20];
    int time = 0;
    int i;
    scanf("%s", dial);

    for (i = 0; i < strlen(dial); i++)
    {
        if (dial[i] >= 'A' && dial[i] <= 'C') time += 3;
        else if(dial[i] >= 'D' && dial[i] <= 'F') time += 4;
        else if(dial [i] >= 'G' && dial[i] <= 'I') time += 5;
        else if(dial [i] >= 'J' && dial[i] <= 'L') time += 6;
        else if(dial [i] >= 'M' && dial[i] <= 'O') time += 7;
        else if(dial [i] >= 'P' && dial[i] <= 'S') time += 8;
        else if(dial [i] >= 'T' && dial[i] <= 'V') time += 9;
        else if(dial [i] >= 'W' && dial[i] <= 'Z') time += 10;
    }

    printf("%d", time);

    return 0;
}