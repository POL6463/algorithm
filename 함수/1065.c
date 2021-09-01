#include <stdio.h>

int def_han(int n);

int main(void)
{
    int n, res;

    scanf("%d", &n);

    res = def_han(n);

    printf("%d\n", res);

    return 0;
}

int def_han(int n)
{
    int a=-1, b=-1, c=-1, d=-1;
    int i;
    int x = n;
    int counter = 0;
    int res = 0;
    for(i = 1; i <= n; i++)
    {
        x = 0;
        x = i;
        counter = 0;
        while (x != 0)
        {
            if (counter == 0)
            {
                a = (x%10);
                counter++;
                x /= 10;
             
            }
            else if (counter == 1)
            {
                b = (x%10);
                counter++;
                x /= 10;
            }
            else if (counter == 2)
            {
                c = (x%10);
                counter++;
                x /= 10;
            }
            else if(counter == 3)
            {
                d = 1;
                counter++;
                x /= 10;
            }
        }
       

        if (counter == 1)
        {
            res++;
            
        }
        else if(counter == 2)
        {
            res++;
            
        }
        else if(counter == 3)
        {
            if ((c - b) == (b - a))
            {
                res++;
                
            }
        }
       
        
    }
    return res;

}