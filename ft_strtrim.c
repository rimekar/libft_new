#include <stdlib.h>

int is_in_set(char c, const char *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *trimmed;
    size_t start;
    size_t end;
    size_t len;

    start = 0;
    while (s1[start] && is_in_set(s1[start], set))
        start++;
    end = 0;
    while (s1[end])
        end++;
    while (end > start && is_in_set(s1[end - 1], set))
        end--;
    len = end - start;
    trimmed = (char *)malloc(len + 1);
    if (!trimmed)
        return NULL;
    trimmed[len] = '\0';
    while (len--)
        trimmed[len] = s1[start + len];
    return trimmed;
}
/*
int main()
{
    char const *s1 = "   Hello World!   ";
    char const *set = " ";
    char *result;

    result = ft_strtrim(s1, set);
    if (result)
    {
        printf("Trimmed string: '%s'\n", result);
        free(result);
    }
    else
    {
        printf("Failed to allocate memory.\n");
    }
    return 0;
}
*/