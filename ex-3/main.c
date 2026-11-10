#include <stdlib.h>
#include <stdio.h>

void str_rev(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while (str[j] != '\0')
    {
        j++;
    }
    j--;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char str[] = "hello world !";

    str_rev(str);
    printf("%s\n", str);

    exit(0);
}