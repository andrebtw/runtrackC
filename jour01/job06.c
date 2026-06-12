char *my_strcpy(char *dst, char *src)
{
    if (!dst || !src)
        return (void *)0;

    unsigned long long i = 0;

    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = src[i];
    return dst;
}

#include <stdio.h>
int main()
{
    char string[] = "testttt";
    char dst[20];

    printf("%s", my_strcpy(dst, string));
    return 0;
}
