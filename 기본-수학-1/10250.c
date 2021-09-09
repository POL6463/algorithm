#include <stdio.h>

int main(void)
{
    int n, H, W, N;
    int i, j;
    scanf("%d", &n);
    int floor;
    int room;
    for(i = 0; i < n; i++)
    {
        scanf("%d%d%d", &H, &W, &N);
        int number = N;
        for(j = 0; number > H; j++)
        {
            number -= H;
        }
        floor = number;
        room = j + 1;
        printf("%d%02d\n", floor, room);
        
    }
    return 0;
}