#include <stdio.h>

size_t strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    const char *s;
    char *d;

    s = src;
    d = dst;
    i = 0;
    
    while (*s && i < size - 1)
    {
        *d = *s;
        d++;
        s++;
        i++;
    }
    if (size > 0)
    {
        *d = '\0';
    }
    
    while (*s)
    {
        s++;
        i++;
    }

    return i;
}
/*
int main()
{
    char src[] = "Hello, World!";
    char dest[20];
    
    strlcpy(dest, src, sizeof(dest));
    printf("Copied string: %s\n", dest);
    
    return 0;
}*/