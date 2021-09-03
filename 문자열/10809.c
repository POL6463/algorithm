#include <stdio.h>

int main(void)
{
    char word[101] = {'0',};
    char abc[26] = {"abcdefghijklmnopqrstuvwxyz"};
    int res[26] = {-1};
    int i = 0;
    int j;

    for(i = 0; i < 26; i++)
    {
        res[i] = -1;
    }
    i = 0;
    scanf("%s", word);
    while (word[i] != '\0')
    {
        for (j = 0;j < 26; j++)
        {
            
            if((word[i] == abc[j]) && res[j] == -1)
            {
                res[j] = i;
            }
        }



        i++;
        
    }
    for (i = 0; i < 26; i++)
    {
        printf("%d ", res[i]);
    }
    
    return 0;

}