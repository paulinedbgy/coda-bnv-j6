#include "count_words.h"

int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ' || *str == '\'')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            count++;
            in_word = 1;
        }
        str++;
    }
    return (count);
}