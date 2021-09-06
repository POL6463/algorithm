#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[105] = {0};
    int count = 0;
    int i, len;

    scanf("%s", word);
    len = strlen(word);

    for (i = 0; i < len; i++)
    {
        if(word[i] == 'd')
        {
            if(word[i + 1] == '-')
            {
                count++;
                i++;
            }
            else if(word[i + 1] == 'z')
            {
                if(word[i + 2] == '=')
                {
                    count++;
                    i += 2;
                }
                else count++;
            }
            else count++;
        }
        else if(word[i] == 'c')
        {
            if(word[i + 1] == '=' || word[i + 1] == '-')
            {
                count++;
                i++;
            }
            else count++;
        }
        else if(word[i] == 'l' || word[i] == 'n')
        {
            if(word[i + 1] == 'j')
            {
                count++;
                i++;
                
            }
            else count++;
        }
        else if(word[i] == 's' || word[i] == 'z')
        {
            if(word[i + 1] == '=')
            {
                count++;
                i++;
            }
            else count++;
        }
        else count++;


        
    }
    printf("%d\n", count);

    return 0;

}