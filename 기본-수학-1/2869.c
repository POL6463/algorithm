#include <stdio.h>

int main(void)
{
    int v, a, b, i;
    scanf("%d%d%d", &a, &b, &v);
    int hight = v;

    // for(i = 0; hight > 0; i++)
    // {
    //     hight -= a;
    //     if(hight >0)
    //     {
    //         hight += b;
    //     }
    // }
    

    int day = (v-b)/(a-b);
    if((v-b)%(a-b) != 0)
    {
        day++;
    }


    


    printf("%d\n", day);

    return 0;
}