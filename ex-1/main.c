#include <stdlib.h>
#include <stdio.h>

int str_len(char *str)
{
    int len = 0;
    while (*str++)
        len++;
    return len;
}
int main()
{
	int longueur;
    char *str = "Hello, World!";
    longueur = str_len(str);
    printf("Length of the string: %d\n", longueur);
    return 0;
}