#include <stdlib.h>

int ft_abs(int i)
{
    if (i < 0)
        return (i * -1);
    return (i);
}

int     *ft_range(int start, int end)
{
    int j;
    int  *str;
    int interval;

    interval = (ft_abs(end - start) + 1);
    str = (int *)malloc(interval * sizeof(int));
    j = 0;
    if (!str)
        return(0);
    while (j < interval)
    {
        if (start < end)
        {
            str[j] = start;
            start++;
            j++;
        }
        else
        {
            str[j] = start;
            start--;
            j++;
        }
    }
    return (str);
}
