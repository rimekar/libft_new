#include <stdlib.h>

char *ft_itoa(int n)
{
    char *str;
    int temp_n;
    size_t len;
    int sign;

    temp_n = n;
    len = (n > 0) ? 0 : 1;
    sign = (n < 0) ? -1 : 1;
    while (temp_n)
    {
        len++;
        temp_n /= 10;
    }
    str = (char *)malloc(len + 1);
    if (str == NULL)
        return NULL;
    str[len] = '\0';
    temp_n = n;
    while (len-- > 0)
    {
        str[len] = (char)('0' + sign * (temp_n % 10));
        temp_n /= 10;
    }
    if (n < 0)
        str[0] = '-';
    return str;
}
/*
int main()
{
    char *str;
    int num;

    num = -12345;
    str = ft_itoa(num);
    if (str == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Converted string: %s\n", str);
    free(str);
    return 0;
}
*/