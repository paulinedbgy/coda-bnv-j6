#include <stdio.h>
#include <string.h>
#include "revert_words.h"

void revert_words(char *str)
{
    int i;
    int start;
    int end;

    i = strlen(str) - 1;

    while (i >= 0)
    {
        while (i >= 0 && str[i] == ' ')
            i--;

        end = i;

        while (i >= 0 && str[i] != ' ')
            i--;

        start = i + 1;

        if (end >= start)
        {
            while (start <= end)
            {
                printf("%c", str[start]);
                start++;
            }
            if (i >= 0)
                printf(" ");
        }
    }
    printf("\n");
}