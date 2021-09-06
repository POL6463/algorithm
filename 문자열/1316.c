#include <stdio.h>
#include <string.h>

int main(void)
{
    int N, i, j, k;
    scanf("%d", &N);
    int group = 0;
    int abc[26] = {0};
    for (i = 0; i < N; i++)
    {
        char word[105] = {0};
        scanf("%s", word);
        int is_word = 1;
        int len = strlen(word);
        
        for(j = 0; j < 26; j++)
        {
            abc[j] = 0;
        }

        for(j = 0; j < len; j++)
        {
            k = j;
            if(abc[word[j] - 'a'] == 0)
            {
                while (word[j] == word[k])
                {
                    k++;
                }
                abc[word[j] - 'a'] = 1;
                j = k-1;
                if(j == len -1 && is_word == 1)
                {
                    group++;
                }
                
            }
            else is_word = 0;
            
        }
    }

    printf("%d\n", group);

    return 0;
}