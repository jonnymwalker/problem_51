#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp_chars(const void *a, const void* b);

int main()
{
    char x[6][16];
    int len;
    
    for (int n = 1; n < 2000000000; ++n)
    {
        for (int i = 0; i < 6; ++i)
        {
            len = sprintf(x[i], "%d", n * (i + 1));
            qsort(x[i], len, sizeof(char), comp_chars);
            if (i > 0 && strcmp(x[i], x[i - 1]) != 0)
            {
                break;
            }
            else if (i == 5)
            {
                printf("%d\n", n);
                return 0;
            }
        }
    }
    return 1;
}

int comp_chars(const void *a, const void* b)
{
    return *(char *)a - *(char *)b;
}

