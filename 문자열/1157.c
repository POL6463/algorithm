#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j, len;
    char arr[1000000];
    scanf("%s", arr);
    len = strlen(arr);
    int abc[26];

    for(i = 'a'; i <='z'; i++)
    {
        for(j = 0; j < len; j++)
        {
            if(i == arr[j])
            {
                abc[i - 'a']++;
            }
        }
    }
    for(i = 'A'; i <= 'Z'; i++)
    {
        for(j = 0; j < len; j++)
        {
            if(i == arr[j])
            {
                abc[i - 'A']++;
            }
        }
    }

    int counter = abc[0];
    int res = 0;
    for(i = 1; i < 26; i++)
    {
        if(abc[i] > counter)
        {
            counter = abc[i];
            res = i;
        }
    }
    int cnt = 0;
    for(i = 0; i < 26; i++)
    {
        if(counter == abc[i])
        {
            cnt++;
        }
    }
    if (cnt > 1)
    {
        printf("?\n");
    }
    else
    {
        printf("%c", res + 'A');
    }

    return 0;
    

}