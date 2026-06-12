#include <unistd.h>

int my_putchar(char c)
{
    return (write(1, &c, 1));
}

int main()
{
    my_putchar(my_putchar('e') + '0');
    return 0;
}
