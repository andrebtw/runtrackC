int char_is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int str_is_digit(char *str)
{
    if (!str)
        return -1;

    int i = 0;
    while (str[i])
    {
        if (!char_is_digit(str[i]))
            return 0;
        i++;
    }
    return 1;
}