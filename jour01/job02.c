#include <unistd.h>

int my_putstr(char *c)
{
    int last_code = 0;

    if (!c)
        return (-1);

    size_t i = 0;

    while (c[i])
    {
        last_code = write(1, &c[i], 1);
        i++;
    }
    return last_code;
}

