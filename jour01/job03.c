int my_strlen(char *c)
{
    if (!c)
        return 0;
    int i = 0;
    while (c[i])
        i++;
    return i;
}
