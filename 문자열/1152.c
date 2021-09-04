#include <stdio.h>
#include <string.h>

int main(void){
    char str[1000005];
    int i, word, j, len;
    fgets(str, 100005, stdin);

    len = strlen(str);
    int space = 0;
    for(i = 1; i <= len-1; i++)
    {
        if(str[i] == ' ')
        {
            if(i != (len-2))
            {
                space++;
                
            }
        }
    }

    if(space == 0 && str[0] == ' ' && len == 2)
    {
        printf("0");
    }
    else printf("%d\n", space +1);


    return 0;
}