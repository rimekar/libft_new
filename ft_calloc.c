#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_calloc(size_t count, size_t size)
{
    void *memory;
    size_t totalSize;

    totalSize = count * size;
    memory = malloc(totalSize);
    if (memory != NULL)
    {
        memset(memory, 0, totalSize);
    }

    return memory;
}
/*
int main()
{
    int *arr;
    size_t num;
    size_t i;

    num = 10;
    arr = (int *)ft_calloc(num, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    i = 0;
    while (i < num)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    free(arr);
    return 0;
}
*/